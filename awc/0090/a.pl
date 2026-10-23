#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my $sum = 0;
for (1 .. $n) {
	my ($a, $b) = split ' ', <STDIN>;
	$sum += $a - $b if $a > $b;
}
say $sum;
