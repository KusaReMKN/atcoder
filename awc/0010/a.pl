#! /usr/bin/env perl
use v5.38;

my ($n, $m) = split ' ', <STDIN>;
my @a = split ' ', <STDIN>;

my $sum = 0;
$sum += $_ for @a;
say $sum < $m ? 'No' : 'Yes';
