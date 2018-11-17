Mac OS X Build Instructions and Notes
====================================
This guide will show you how to build bitcoind (headless client) for OS X.

Notes
-----

* Tested on OS X 10.7 through 10.10 on 64-bit Intel processors only.

* All of the commands should be executed in a Terminal application. The
built-in one is located in `/Applications/Utilities`.

Preparation
-----------

You need to install Xcode with all the options checked so that the compiler
and everything is available in /usr not just /Developer. Xcode should be
available on your OS X installation media, but if not, you can get the
current version from https://developer.apple.com/xcode/. If you install
Xcode 4.3 or later, you'll need to install its command line tools. This can
be done in `Xcode > Preferences > Downloads > Components` and generally must
be re-done or updated every time Xcode is updated.

You will also need to install [Homebrew](http://brew.sh) in order to install library
dependencies.

The installation of the actual dependencies is covered in the Instructions
sections below.

Instructions: Homebrew
----------------------

#### Install dependencies using Homebrew

        brew install autoconf automake berkeley-db4 libtool boost miniupnpc openssl pkg-config protobuf qt5

NOTE: Building with Qt4 is still supported, however, could result in a broken UI. As such, building with Qt5 is recommended.

### Building `bitcoind`

1. Clone the GitHub tree to get the source code and go into the directory.

        git clone https://github.com/bitcoin/bitcoin.git
        cd bitcoin

2.  Build bitcoind:

        ./autogen.sh
        ./configure --with-gui=qt5
        make

3.  It is also a good idea to build and run the unit tests:

        make check

4.  (Optional) You can also install bitcoind to your path:

        make install

Use Qt Creator as IDE
------------------------
You can use Qt Creator as IDE, for debugging and for manipulating forms, etc.
Download Qt Creator from http://www.qt.io/download/. Download the "community edition" and only install Qt Creator (uncheck the rest during the installation process).

1. Make sure you installed everything through Homebrew mentioned above
2. Do a proper ./configure --with-gui=qt5 --enable-debug
3. In Qt Creator do "New Project" -> Import Project -> Import Existing Project
4. Enter "bitcoin-qt" as project name, enter src/qt as location
5. Leave the file selection as it is
6. Confirm the "summary page"
7. In the "Projects" tab select "Manage Kits..."
8. Select the default "Desktop" kit and select "Clang (x86 64bit in /usr/bin)" as compiler
9. Select LLDB as debugger (you might need to set the path to your installtion)
10. Start debugging with Qt Creator

Creating a release build
------------------------
You can ignore this section if you are building `bitcoind` for your own use.

bitcoind/bitcoin-cli binaries are not included in the Bitcoin-Qt.app bundle.

If you are building `bitcoind` or `Bitcoin-Qt` for others, your build machine should be set up
as follows for maximum compatibility:

All dependencies should be compiled with these flags:

 -mmacosx-version-min=10.7
 -arch x86_64
 -isysroot $(xcode-select --print-path)/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.7.sdk

Once dependencies are compiled, see [doc/release-process.md](release-process.md) for how the Bitcoin-Qt.app
bundle is packaged and signed to create the .dmg disk image that is distributed.

Running
-------

It's now available at `./bitcoind`, provided that you are still in the `src`
directory. We have to first create the RPC configuration file, though.

Run `./bitcoind` to get the filename where it should be put, or just try these
commands:

    echo -e "rpcuser=bitcoinrpc\nrpcpassword=$(xxd -l 16 -p /dev/urandom)" > "/Users/${USER}/Library/Application Support/Bitcoin/bitcoin.conf"
    chmod 600 "/Users/${USER}/Library/Application Support/Bitcoin/bitcoin.conf"

The next time you run it, it will start downloading the blockchain, but it won't
output anything while it's doing this. This process may take several hours;
you can monitor its process by looking at the debug.log file, like this:

    tail -f $HOME/Library/Application\ Support/Bitcoin/debug.log

Other commands:
-------

    ./bitcoind -daemon # to start the bitcoin daemon.
    ./bitcoin-cli --help  # for a list of command-line options.
    ./bitcoin-cli help    # When the daemon is running, to get a list of RPC commands

Cross Compiling from linux
====================================


The first step is to install necessary compiler and toolset in the linux machine that you are going to cross compile from. The procedure will first compile Clang which can cross compile for OSX from linux, to cross compile clang your machine supposed to have native compiler on it first. To do so, on Ubuntu machine execute:

    sudo apt update
    sudo apt upgrade
    sudo apt install build-essential libtool autotools-dev automake pkg-config bsdmainutils curl git

Then other development packages are required for Clang compiler and its toolchain to be compiled and also build system to function properly, again on Ubuntu, install following packages.

    sudo apt install ca-certificates curl librsvg2-bin libtiff-tools libtool automake faketime bsdmainutils cmake imagemagick libcap-dev libz-dev libbz2-dev python python-dev python-setuptools fonts-tuffy graphicsmagick-imagemagick-compat

After all packages are installed in the linux machine, you will also need Mas OS SDK for generic c libraries and os level interfacing. This SDK can be downloaded from Apple Developers Website, current buildsys works with SDK version 10.11 and it is expected to be under ./depends/SDKs/MacOSX10.11.sdk/ folder. SDK Version and the path can be overriden with OSX_SDK_VERSION and OSX_SDK arguments respectively for custom configurations. You can find below command sequence that retrieves SDK from a remote url and extracts to defult folder location

    wget --no-check-certificate https://...urlto.../MacOSX10.11.sdk.tar.xz
    mkdir -p SDKs
    tar -xvf MacOSX10.11.sdk.tar.xz -C ./SDKs

Now that OSX SDK is ready, dependencies need to be compiled first to cross compile SUQA itself. To do so, you just need to pass HOST=x86_64-apple-darwin parameter for the make file under depends folder. Buildsys will handle the rest

    cd ./depends
    make HOST=x86_64-apple-darwin

After dependencies are finished of cross-compiling, navigate to root folder and compile the project with the new cross compilation host prefix as below. One thing that is important, SUOQA Core on Osx need to be compiled with QT5

    cd ..
    ./autogen.sh # not required when building from tarball
    CONFIG_SITE=$PWD/depends/x86_64-apple-darwin/share/config.site ./configure --prefix=$PWD/depends/x86_64-apple-darwin --with-gui=qt5
    make

To generate .dmg files under /release folder, type

    make deploy

