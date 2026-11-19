#! /usr/bin/env perl
use v5.38;

my ($a, $b) = split ' ', <STDIN>;
say $a+$b > 9 ? 2 : 1;
