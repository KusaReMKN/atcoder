#! /usr/bin/env perl
use v5.38;

my ($n, $k) = split ' ', <STDIN>;
my @p = split ' ', <STDIN>;
my $sum = 0;
$sum += $_ * ($_ >= $k) for @p;
say $sum;
