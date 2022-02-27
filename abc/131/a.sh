#!/bin/sh
grep '\(.\)\1' >/dev/null && echo Bad || echo Good
