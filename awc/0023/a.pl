#! /usr/bin/env perl
use v5.38;

my ($n, $m, $r) = split ' ', <STDIN>;
my @t = split ' ', <STDIN>;

my $sum = 0;
$sum += $_ for @t;
say $sum + $m * $r;
