#! /usr/bin/env perl
use v5.38;

my ($n, $m) = split ' ', <STDIN>;

my @cnt = (0) x $m;
my @sum = (0) x $m;
for (1 .. $n) {
	my ($a, $b) = split ' ', <STDIN>;
	$cnt[$a-1]++;
	$sum[$a-1] += $b;
}
say $sum[$_-1] / $cnt[$_-1] for (1 .. $m);
