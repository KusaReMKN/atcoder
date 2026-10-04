#! /usr/bin/env perl
use v5.38;

my ($n, $m) = split ' ', <STDIN>;
say int($m / $n) + ($m % $n >= $_)for (1 .. $n);
