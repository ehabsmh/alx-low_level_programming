#!/bin/bash
gcc -shared -o lib_hack.so -fPIC make_me_win.c
export LD_PRELOAD=./lib_hack.so:$LD_LIBRARY_PATH
