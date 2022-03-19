#!/bin/sh
tr ' ' '\n' | sort -g | dc -e '??+p'
