#!/bin/bash
wget -P /tmp https://github.com/yassirak/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libiga.so
export LD_RELOAD=/tmp/libiga.so
