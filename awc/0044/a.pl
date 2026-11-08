#! /usr/bin/env perl
use v5.38;

my ($n, $m) = split ' ', <STDIN>;
for (1 .. $n) {
	my ($c, $s) = split ' ', <STDIN>;
	my $t = $c - $s;
	my $k = $m < $t ? $m : $t;
	say $s += $k;
	$m -= $k;
}
