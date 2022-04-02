#!/usr/bin/env perl
use strict;

$_ = <>;
my ($s, $t) = split;
my $res = 0;
foreach (0..$s) {
	my $a = $_;
	foreach (0..$s-$a) {
		my $b = $_;
		foreach (0..$s-$a-$b) {
			my $c = $_;
			if ($a + $b + $c <= $s && $a * $b * $c <= $t) {
				$res++;
			}
		}
	}
}
print "$res\n";
