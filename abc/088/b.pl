#!/usr/bin/env perl
use strict;

<>;
$_ = <>;
my $i = 0;
my ($alice, $bob) = (0, 0);
foreach (reverse sort { $a <=> $b } split) {
	if ($i++ % 2 == 0) {
		$alice += $_;
	} else {
		$bob += $_;
	}
}
print $alice - $bob . "\n";
