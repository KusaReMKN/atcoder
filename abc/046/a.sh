#!/bin/sh
tr ' ' '\n' | sort | uniq | wc -l
