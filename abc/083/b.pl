#!/usr/bin/env perl
use strict;

$_ = <>;
my ($n, $a, $b) = split;
my $res = 0;
foreach (1..$n) {
	my $s = 0;
	foreach (split '') {
		$s += $_;
	}
	if ($a <= $s && $s <= $b) {
		$res += $_;
	}
}
print "$res\n";
