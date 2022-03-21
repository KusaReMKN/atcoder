#!/bin/sh
sed -e 's/./1&/g' | dc -e '0?p'
