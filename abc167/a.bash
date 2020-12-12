#!/bin/sh

read s
read t

if expr "$t" : "$s[a-z]" >/dev/null; then
  echo "Yes"
else
  echo "No"
fi
