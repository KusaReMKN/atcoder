#! /usr/bin/env perl
use v5.38;

my ($n, $y, $m) = split ' ', <STDIN>;
my $mm = ($m % 12 + 1);
my $yy = ($y + ($m >= 12));

my $w = 0;
my $ww = 0;
for (1 .. $n) {
	my ($a, $b, $p, $q, $c) = split ' ', <STDIN>;
	$w += $c if $p == $y && $q == $m;
	$ww += $c if $p == $yy && $q == $mm;
}
printf "%d %d\n", $w, $ww;
