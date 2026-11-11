#! /usr/bin/env perl
use v5.38;

my ($n, $p, $b, $k) = split ' ', <STDIN>;
my @c = split ' ', <STDIN>;

my $sum = 0;
$sum += ($p + ($_ >= $k) * $b) * $_ for (@c);
say $sum;
