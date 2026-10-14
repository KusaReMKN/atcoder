#! /usr/bin/env perl
use v5.38;

my ($k, $m) = split ' ', <STDIN>;
my @l = split ' ', <STDIN>;

my $sum = 0;
$sum += $_ for @l;
say $sum % $m;
