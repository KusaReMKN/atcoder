#! /usr/bin/env perl
use v5.38;

my ($n, $k) = split ' ', <STDIN>;
my @a = split ' ', <STDIN>;

my $sum = int(($n-1) / $k);
$sum += $_ for @a;
say $sum;
