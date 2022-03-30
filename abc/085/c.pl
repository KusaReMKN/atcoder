#!/usr/bin/env perl
use strict;

$_ = <>;
my ($n, $y) = split;
foreach (0..$n) {
	my $fu = $_;
	foreach (0..$n-$fu) {
		my $hi = $_;
		my $no = $n - $fu - $hi;
		my $tmp = 10000 * $fu + 5000 * $hi + 1000 * $no;
		if ($tmp == $y) {
			print "$fu $hi $no\n";
			exit;
		}
	}
}
print "-1 -1 -1\n";
