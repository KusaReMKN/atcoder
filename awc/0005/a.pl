#! /usr/bin/env perl
use v5.38;

my ($n, $k) = split ' ', <STDIN>;
my @p = split ' ', <STDIN>;

my $sum = 0;
foreach (@p) {
	$sum += $_ if ($_ % $k == 0);
}

say $sum;
