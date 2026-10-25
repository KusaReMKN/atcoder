#! /usr/bin/env perl
use v5.38;

my ($n, $d) = split ' ', <STDIN>;
my $sum = 0;
for (1 .. $n) {
	my ($a, $b) = split ' ', <STDIN>;
	$sum += $a + $b * $d;
}
say $sum;
