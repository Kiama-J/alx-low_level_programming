#!/bin/bash
wget -O /tmp/win.so https://github.com/alx-tools/0x18.c.git
export LD_PRELOAD=/tmp/win.so
