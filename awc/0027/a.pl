#! /usr/bin/env perl
use v5.38;

my ($n, $s, $t) = split ' ', <STDIN>;
my @a = split ' ', <STDIN>;

my $cnt = 0;
$cnt += abs($_ - $s) <= $t for @a;
say $cnt;
