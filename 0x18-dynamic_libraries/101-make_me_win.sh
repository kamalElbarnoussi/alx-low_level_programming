#!/bin/bash
wget -P /tmp https://github.com/kamalElbarnoussi/alx/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
