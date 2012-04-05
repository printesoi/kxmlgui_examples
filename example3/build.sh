#!/bin/bash

[ -d build ] || mkdir build && cd build || exit 1
cmake .. -DCMAKE_INSTALL_PREFIX=`kde4-config --prefix`
make && sudo make install && kxmlexample
