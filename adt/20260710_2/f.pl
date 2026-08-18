#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @a = split ' ', <STDIN>;
my $total = 0;
$total += $_ for @a;

my $sum = 0;
for (@a) {
	$total -= $_;
	$sum += $_ * $total;
}
say $sum;
