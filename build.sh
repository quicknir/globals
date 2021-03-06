#!/bin/bash

clang++ -std=c++14 -c -fpic static.cpp
ar rcs libstatic.a static.o

clang++ -std=c++14 -c -fpic dynamic.cpp
clang++ -shared -o libdynamic.so dynamic.o -L./ -lstatic

clang++ -std=c++14 -c main.x.cpp
clang++ -L./ -Wl,-rpath=./ main.x.o -lstatic -ldynamic
