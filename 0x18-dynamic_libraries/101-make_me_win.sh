#!/bin/bash
wget -P /tmp/ https://raw.github.com/Abel5173/alx-low_level_programming/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
