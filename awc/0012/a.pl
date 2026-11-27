#! /usr/bin/env perl
use v5.38;

my ($n, $t) = split ' ', <STDIN>;
my @h = split ' ', <STDIN>;
my @c = split ' ', <STDIN>;

my $sum = 0;
for (0 .. $n-1) {
	$sum += $c[$_] if $h[$_] <= $t;
}
say $sum;
