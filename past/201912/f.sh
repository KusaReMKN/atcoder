#!/bin/sh
sed -e 's/[A-Z][a-z]*[A-Z]/& /g' \
	| tr ' ' '\n' \
	| sort -f \
	| tr -d '\n' \
	| sed -e 's/$/\n/'
