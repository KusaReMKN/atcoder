#! /usr/bin/env perl
use v5.38;

my ($n, $q) = split ' ', <STDIN>;
my @s = split ' ', <STDIN>;
for (1 .. $q) {
	my ($a, $b) = split ' ', <STDIN>;
	say $s[$a-1] > $s[$b-1] ? 'Yes' : 'No';
}
