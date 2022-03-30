#!/usr/bin/env perl
use strict;

my $a = <>;
my $b = <>;
my $c = <>;
my $x = <>;
my $res = 0;
foreach (0..$a) {
	my $a = $_;
	foreach (0..$b) {
		my $b = $_;
		foreach (0..$c) {
			my $c = $_;
			my $tmp = $a * 500 + $b * 100 + $c * 50;
			if ($tmp == $x) {
				$res++;
			}
		}
	}
}
print "$res\n";
