#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @a = split ' ', <STDIN>;

my $sum = 0;
$_ % 2 == 0 && ($sum += $a[$_]) for (0 .. $#a);
say $sum;
