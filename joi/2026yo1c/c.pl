#! /usr/bin/env perl
use v5.38;

my ($n, $x) = split ' ', <STDIN>;
my @h = split ' ', <STDIN>;

my $cnt = 0;
$_ >= $x && $cnt++ for @h;
say $cnt;
