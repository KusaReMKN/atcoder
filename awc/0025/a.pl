#! /usr/bin/env perl
use v5.38;

my ($n, $x) = split ' ', <STDIN>;
my @a = split ' ', <STDIN>;
my $cnt = 0;
$cnt += $_ < $x for @a;
say $cnt;
