#! /usr/bin/env perl
use v5.38;

my ($n, $l, $r, $m) = split ' ', <STDIN>;
my $cnt = 0;
for (1 .. $n) {
	my ($p, $k) = split ' ', <STDIN>;
	$cnt++ if ($l <= $p && $p <= $r && $k <= $m);
}
say $cnt;
