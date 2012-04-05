#!/bin/bash

SCRIPT="$0"
DIRNAME=`dirname $0`
BUILDDIR="$DIRNAME/build"
KDEPREFIX=`kde4-config --prefix`
EXECUTABLE="kxmlexample"

usage() {
    echo    "Usage: $SCRIPT OPTION"
    echo -e "\nValid options:"
    echo    "   build     - compile and install the executable"
    echo    "   run       - run the executable"
    echo    "   uninstall - unistall all the files"
    echo    "   clean     - remove build directory"
}

build() {
    if [[ ! -d "$BUILDDIR" ]]; then
        mkdir "$BUILDDIR" || exit 1
    fi
    cd "$BUILDDIR"
    cmake .. -DCMAKE_INSTALL_PREFIX="$KDEPREFIX"
    make
    sudo make install
}

run() {
    if [[ ! -x "$KDEPREFIX/bin/$EXECUTABLE" ]]; then
        build
    fi
    $EXECUTABLE
}

uninstall() {
    [[ -d "$BUILDDIR" ]] && cd "$BUILDDIR" && sudo make uninstall
}

if [[ $# -eq 0 ]]; then
    usage
    exit 1;
fi

case "$1" in
    "build")
        build
        ;;
    "run")
        run
        ;;
    "uninstall")
        uninstall
        ;;
    *)
        usage
        ;;
esac

