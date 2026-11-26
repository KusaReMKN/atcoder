#! /usr/bin/env perl
use v5.38;

my ($n, $k) = split ' ', <STDIN>;
my $sum = 0;
for (1 .. $n) {
	my ($c, $d) = split ' ', <STDIN>;
	$sum += $d if $c <= $k;
}
say $sum;
