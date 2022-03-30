#!/usr/bin/env perl
use strict;

<>;
my @d = <>;
my $prev = -1;
my $layer = 0;
foreach (sort @d) {
	if ($prev != $_) {
		$layer++;
	}
	$prev = $_;
}
print "$layer\n";
