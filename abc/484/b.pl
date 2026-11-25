#! /usr/bin/env perl
use v5.38;

chomp(my $k = <STDIN>);
my @a = sort { $a <=> $b } split ' ', <STDIN>;
say $a[-1] != 9 ? -1 : $a[0];
