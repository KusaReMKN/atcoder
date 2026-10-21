#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @t = split ' ', <STDIN>;

my @d;
push @d, $t[$_] - $t[$_-1] for (1 .. $#t);
@d = sort { $a <=> $b } @d;
printf "%d %d\n", $d[0], $d[-1];
