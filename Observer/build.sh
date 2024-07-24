#!/bin/bash
mkdir build
cd build
aclocal
automake --add-missing
autoreconf -fi
automake
./configure
make