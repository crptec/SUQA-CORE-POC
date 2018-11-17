ACLOCAL_AMFLAGS = -I build-aux/m4
SUBDIRS = src
.PHONY: deploy FORCE

GZIP_ENV="-9n"
export PYTHONPATH

if BUILD_BITCOIN_LIBS
pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libbitcoinconsensus.pc
endif

SUQAD_BIN=$(top_builddir)/src/SUQAd$(EXEEXT)
SUQA_QT_BIN=$(top_builddir)/src/qt/SUQA-qt$(EXEEXT)
SUQA_CLI_BIN=$(top_builddir)/src/SUQA-cli$(EXEEXT)
SUQA_TX_BIN=$(top_builddir)/src/SUQA-tx$(EXEEXT)

empty :=
space := $(empty) $(empty)

DIST_DOCS = $(wildcard doc/*.md) $(wildcard doc/release-notes/*.md)

COVERAGE_INFO = baseline_filtered_combined.info baseline.info block_test.info \
  leveldb_baseline.info test_bitcoin_filtered.info total_coverage.info \
  baseline_filtered.info block_test_filtered.info \
  leveldb_baseline_filtered.info test_bitcoin_coverage.info test_bitcoin.info

dist-hook:
	-$(MAKE) -C $(top_distdir)/src/leveldb clean
	-$(MAKE) -C $(top_distdir)/src/secp256k1 distclean
	-$(GIT) archive --format=tar HEAD -- src/clientversion.cpp | $(AMTAR) -C $(top_distdir) -xf -

distcheck-hook:
	$(MKDIR_P) $(top_distdir)/_build/src/leveldb
	cp -rf $(top_srcdir)/src/leveldb/* $(top_distdir)/_build/src/leveldb/
	-$(MAKE) -C $(top_distdir)/_build/src/leveldb clean

distcleancheck:
	@:

PLATF = $(shell echo "$(host)" | cut -f1,2 -d"-")
REL_DIR = $(top_srcdir)/release
STG_DIR = $(REL_DIR)/$(PLATF)

PACK_NAME = $(REL_DIR)/$(PACKAGE)-$(PACKAGE_VERSION)-$(PLATF)-CORE

SUQA-WIN-PACKAGE: all-recursive
	$(MKDIR_P) $(STG_DIR)
	STRIPPROG="$(STRIP)" $(INSTALL_STRIP_PROGRAM) $(SUQAD_BIN) $(STG_DIR)
	STRIPPROG="$(STRIP)" $(INSTALL_STRIP_PROGRAM) $(SUQA_QT_BIN) $(STG_DIR)
	STRIPPROG="$(STRIP)" $(INSTALL_STRIP_PROGRAM) $(SUQA_CLI_BIN) $(STG_DIR)
	STRIPPROG="$(STRIP)" $(INSTALL_STRIP_PROGRAM) $(SUQA_TX_BIN) $(STG_DIR)
	@test -f $(SZA) && \
		$(SZA) a -m0=lzma2 -mx=9 $(STG_DIR)-CORE.7z $(STG_DIR)/SUQA-qt.exe $(STG_DIR)/SUQA-tx.exe $(STG_DIR)/SUQAd.exe $(STG_DIR)/SUQA-cli.exe && \
		cat $(top_builddir)/share/7z.sfx $(STG_DIR)-CORE.7z > $(PACK_NAME).exe && \
	        echo error: could not build $@
	@echo built $@

$(if $(findstring src/,$(MAKECMDGOALS)),$(MAKECMDGOALS), none): FORCE
	$(MAKE) -C src $(patsubst src/%,%,$@)

OSX_APP=SUQA-CORE.app
OSX_VOLNAME = $(subst $(space),-,$(PACKAGE_NAME))
OSX_DMG = $(OSX_VOLNAME).dmg
OSX_BACKGROUND_IMAGE=$(top_srcdir)/contrib/macdeploy/background.tiff
OSX_DSSTORE_GEN=$(top_srcdir)/contrib/macdeploy/custom_dsstore.py
OSX_DEPLOY_SCRIPT=$(top_srcdir)/contrib/macdeploy/macdeployqtplus.py
OSX_FANCY_PLIST=$(top_srcdir)/contrib/macdeploy/fancy.plist
OSX_INSTALLER_ICONS=$(top_srcdir)/src/qt/res/icons/bitcoin.icns
OSX_PLIST=$(top_srcdir)/share/qt/Info.plist
OSX_QT_TRANSLATIONS = da,de,es,hu,ru,uk,zh_CN,zh_TW

OSXAPP_DIR=$(STG_DIR)/$(OSX_APP)
OSXISO_DIR=$(STG_DIR)/dist

SUQA-OSX-APP: all-recursive
	@rm -rf $(OSXAPP_DIR)
	$(MKDIR_P) $(OSXAPP_DIR)/Contents/Resources/Base.lproj
	$(MKDIR_P) $(OSXAPP_DIR)/Contents/MacOS
	@touch $(OSXAPP_DIR)/Contents/Resources/empty.lproj
	$(INSTALL_DATA) $(OSX_INSTALLER_ICONS) $(OSXAPP_DIR)/Contents/Resources/bitcoin.icns
	$(INSTALL_DATA) $(OSX_PLIST) $(OSXAPP_DIR)/Contents/Info.plist
	@echo "APPL????" > $(OSXAPP_DIR)/Contents/PkgInfo
	STRIPPROG="$(STRIP)" $(INSTALL_STRIP_PROGRAM) $(SUQA_QT_BIN) $(OSXAPP_DIR)/Contents/MacOS/SUQA-qt
	STRIPPROG="$(STRIP)" $(INSTALL_STRIP_PROGRAM) $(SUQAD_BIN) $(OSXAPP_DIR)/Contents/MacOS/SUQAd
	STRIPPROG="$(STRIP)" $(INSTALL_STRIP_PROGRAM) $(SUQA_CLI_BIN) $(OSXAPP_DIR)/Contents/MacOS/SUQA-cli
	STRIPPROG="$(STRIP)" $(INSTALL_STRIP_PROGRAM) $(SUQA_TX_BIN) $(OSXAPP_DIR)/Contents/MacOS/SUQA-tx
	echo '{	CFBundleDisplayName = "$(PACKAGE_NAME)"; CFBundleName = "$(PACKAGE_NAME)"; }' > $(OSXAPP_DIR)/Contents/Resources/Base.lproj/InfoPlist.strings

if BUILD_DARWIN
$(OSX_DMG): $(OSX_APP_BUILT) $(OSX_PACKAGING)
	$(OSX_DEPLOY_SCRIPT) $(OSX_APP) -add-qt-tr $(OSX_QT_TRANSLATIONS) -translations-dir=$(QT_TRANSLATION_DIR) -dmg -fancy $(OSX_FANCY_PLIST) -verbose 2 -volname $(OSX_VOLNAME)

deploydir: $(OSX_DMG)
else
SUQA-OSX-DMG: SUQA-OSX-APP
	@rm -rf $(OSXISO_DIR)
	INSTALLNAMETOOL=$(INSTALLNAMETOOL)  OTOOL=$(OTOOL) STRIP=$(STRIP) $(OSX_DEPLOY_SCRIPT) \
		$(OSX_APP) -translations-dir=$(QT_TRANSLATION_DIR) \
		-add-qt-tr $(OSX_QT_TRANSLATIONS) -verbose 2 \
		-fancy $(OSX_FANCY_PLIST) -prefix $(OSXAPP_DIR)/..
	$(OSX_DSSTORE_GEN) $(OSXISO_DIR)/.DS_Store "$(OSX_VOLNAME)"
	$(LN_S) /Applications $(OSXISO_DIR)/Applications
	$(MKDIR_P) $(OSXISO_DIR)/.background
	cp -f $(OSX_BACKGROUND_IMAGE) $(OSXISO_DIR)/.background/
	$(GENISOIMAGE) -no-cache-inodes -D -l -probe -V "$(OSX_VOLNAME)" -no-pad -r -apple -o $(PACK_NAME).dmg $(OSXISO_DIR)
endif

if TARGET_DARWIN
appbundle: SUQA-OSX-APP
deploy: SUQA-OSX-DMG
endif
if TARGET_WINDOWS
deploy: SUQA-WIN-PACKAGE
endif

$(SUQA_QT_BIN): FORCE
	$(MAKE) -C src qt/$(@F)

$(SUQAD_BIN): FORCE
	$(MAKE) -C src $(@F)

$(SUQA_CLI_BIN): FORCE
	$(MAKE) -C src $(@F)

if USE_LCOV

baseline.info:
	$(LCOV) -c -i -d $(abs_builddir)/src -o $@

baseline_filtered.info: baseline.info
	$(LCOV) -r $< "/usr/include/*" -o $@

leveldb_baseline.info: baseline_filtered.info
	$(LCOV) -c -i -d $(abs_builddir)/src/leveldb -b $(abs_builddir)/src/leveldb -o $@

leveldb_baseline_filtered.info: leveldb_baseline.info
	$(LCOV) -r $< "/usr/include/*" -o $@

baseline_filtered_combined.info: leveldb_baseline_filtered.info baseline_filtered.info
	$(LCOV) -a leveldb_baseline_filtered.info -a baseline_filtered.info -o $@

test_bitcoin.info: baseline_filtered_combined.info
	$(MAKE) -C src/ check
	$(LCOV) -c -d $(abs_builddir)/src -t test_bitcoin -o $@
	$(LCOV) -z -d $(abs_builddir)/src
	$(LCOV) -z -d $(abs_builddir)/src/leveldb

test_bitcoin_filtered.info: test_bitcoin.info
	$(LCOV) -r $< "/usr/include/*" -o $@

block_test.info: test_bitcoin_filtered.info
	$(MKDIR_P) qa/tmp
	-@TIMEOUT=15 qa/pull-tester/run-bitcoind-for-test.sh $(JAVA) -jar $(JAVA_COMPARISON_TOOL) qa/tmp/compTool 0
	$(LCOV) -c -d $(abs_builddir)/src --t BitcoinJBlockTest -o $@
	$(LCOV) -z -d $(abs_builddir)/src
	$(LCOV) -z -d $(abs_builddir)/src/leveldb

block_test_filtered.info: block_test.info
	$(LCOV) -r $< "/usr/include/*" -o $@

test_bitcoin_coverage.info: baseline_filtered_combined.info test_bitcoin_filtered.info
	$(LCOV) -a baseline_filtered.info -a leveldb_baseline_filtered.info -a test_bitcoin_filtered.info -o $@

total_coverage.info:  baseline_filtered_combined.info test_bitcoin_filtered.info block_test_filtered.info
	$(LCOV) -a baseline_filtered.info -a leveldb_baseline_filtered.info -a test_bitcoin_filtered.info -a block_test_filtered.info -o $@ | $(GREP) "\%" | $(AWK) '{ print substr($$3,2,50) "/" $$5 }' > coverage_percent.txt

test_bitcoin.coverage/.dirstamp:  test_bitcoin_coverage.info
	$(GENHTML) -s $< -o $(@D)
	@touch $@

total.coverage/.dirstamp: total_coverage.info
	$(GENHTML) -s $< -o $(@D)
	@touch $@

cov: test_bitcoin.coverage/.dirstamp total.coverage/.dirstamp

endif

if USE_COMPARISON_TOOL
check-local:
	$(MKDIR_P) qa/tmp
	@qa/pull-tester/run-bitcoind-for-test.sh $(JAVA) -jar $(JAVA_COMPARISON_TOOL) qa/tmp/compTool $(COMPARISON_TOOL_REORG_TESTS) 2>&1
endif

dist_noinst_SCRIPTS = autogen.sh

EXTRA_DIST = $(top_srcdir)/share/genbuild.sh qa/pull-tester/rpc-tests.sh qa/pull-tester/run-bitcoin-cli qa/rpc-tests $(DIST_DOCS) $(OSX_PACKAGING)

CLEANFILES = SUQA-OSX-DMG SUQA_WIN_PACKAGE

.INTERMEDIATE: $(COVERAGE_INFO)

clean-local:
	rm -rf test_bitcoin.coverage/ total.coverage/ $(OSX_APP)
