#!/bin/sh
sed -e 1d | sort -gr | uniq | head -2 | tail -1
