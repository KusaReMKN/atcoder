#!/bin/bash

read n

case `echo $n | sed 's/.*\([0-9]$\)/\1/'` in
  2|4|5|7|9)
    echo hon ;;
  0|1|6|8)
    echo pon ;;
  3)
    echo bon ;;
esac
