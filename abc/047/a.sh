#!/bin/sh
tr ' ' '\n' | sort -g | dc -e '[[Yes]]sy[No]??+?=yp'
