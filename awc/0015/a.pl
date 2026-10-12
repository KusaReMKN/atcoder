#! /usr/bin/env perl
use v5.38;

my @a = split ' ', <STDIN>;
my @b = split ' ', <STDIN>;

my $sum = 0;
$sum += $a[$_] * $b[$_] for (0 .. $#a);
say $sum;
