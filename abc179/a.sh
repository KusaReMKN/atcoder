#!/bin/bash

read s

case `echo $s | sed 's/.*\([a-z]\)$/\1/'` in
  s)
    echo "$s""es" ;;
  *)
    echo "$s""s" ;;
esac
