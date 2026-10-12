#! /usr/bin/env perl
use v5.38;

my ($n, $k) = split ' ', <STDIN>;
my @s = split ' ', <STDIN>;

my $cnt = 0;
$_ >= $k && $cnt++ for @s;
say $cnt;
