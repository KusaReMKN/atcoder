#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @a = split ' ', <STDIN>;

my @s = sort { $b <=> $a } @a;
my $sum = 0;
$sum += $s[0] - $s[$_] for (1 .. $#s);
say $sum;
