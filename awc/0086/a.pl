#! /usr/bin/env perl
use v5.38;

my ($n, $x, $y, $r) = split ' ', <STDIN>;
my $sum = 0;
for (1 .. $n) {
	my ($a, $b, $p) = split ' ', <STDIN>;
	$sum += $p if (($x-$a)**2 + ($y-$b)**2 <= $r**2);
}
say $sum;
