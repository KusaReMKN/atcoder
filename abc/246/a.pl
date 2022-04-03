#!/usr/bin/env perl
use strict;

my ($x, $y) = (0, 0);
foreach (1..3) {
	$_ = <>;
	my ($a, $b) = split;
	$x ^= $a;
	$y ^= $b;
}
printf "%d %d\n", $x, $y;
