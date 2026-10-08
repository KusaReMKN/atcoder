#! /usr/bin/env perl
use v5.38;

my ($n, $m) = split ' ', <STDIN>;
say 2 * ($n - 1) * $m;
