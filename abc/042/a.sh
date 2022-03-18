#!/bin/sh
tr ' ' '\n' | sort | tr '\n' ' ' \
	| grep '5 5 7' >/dev/null && echo YES || echo NO
