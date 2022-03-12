#!/bin/sh
tr ' ' '\n' | sort | dc -e '???10*++p'
