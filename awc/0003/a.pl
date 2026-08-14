#! /usr/bin/env perl
use v5.38;

my ($n, $k) = split ' ', <STDIN>;

my $cnt = 0;
for (1 .. $n) {
	my ($a, $b) = split ' ', <STDIN>;
	$cnt++ if ($a * $b >= $k);
}
say $cnt;
