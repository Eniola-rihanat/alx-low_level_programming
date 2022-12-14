#!/bin/bash
wget -P /tmp https://raw.github.com/Eniola-rihanat/alx-low_level_programming/master/0x18-dynamic_libraries/randnum.so
export LD_PRELOAD=/tmp/randnum.so
