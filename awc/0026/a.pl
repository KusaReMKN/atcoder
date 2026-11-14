#! /usr/bin/env perl
use v5.38;

my ($n, $k) = split ' ', <STDIN>;
my @a = split ' ', <STDIN>;
say join ' ', map { $a[$_] } grep { $_ % $k == $k - 1 } (0 .. $n-1);
