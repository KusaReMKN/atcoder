#!/bin/sh
sed -e '1d' | sort | tr -d '\n' | sed -e 's/$/\n/'
