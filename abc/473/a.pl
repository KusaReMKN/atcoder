#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @a = split ' ', <STDIN>;

my $sum = 0;
$sum += $a[$_] for ($n/2 .. $n-1);
say $sum;
