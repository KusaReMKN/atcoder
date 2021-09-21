#!/bin/sh

read s
if echo $s | grep -qE '^([RUD][LUD])*[RUD]?$'
then
	echo Yes
else
	echo No
fi
