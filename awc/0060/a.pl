#! /usr/bin/env perl
use v5.38;

my ($n, $x) = split ' ', <STDIN>;
my @a = split ' ', <STDIN>;

my $sum = 0;
for (@a) {
	my $d = $_ - $x;
	$d = 0 if $d < 0;
	$sum += $d;
}
say $sum;
