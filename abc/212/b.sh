#!/bin/sh
grep -E '^((.)\2\2\2|0123|1234|2345|3456|4567|5678|6789|7890|8901|9012)$' \
	>/dev/null && echo Weak || echo Strong
