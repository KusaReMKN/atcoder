#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @c = split ' ', <STDIN>;

my @m = (0) x ($n);
$m[$_-1]++ for @c;

my $max = 0;
$max = $_ > $max ? $_ : $max for @m;

say $n - $max;
