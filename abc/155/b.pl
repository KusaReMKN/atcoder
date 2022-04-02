#!/usr/bin/env perl
use strict;

<>;
$_ = <>;
foreach (split) {
	if ($_ % 2 == 0) {
		if ($_ % 3 != 0 && $_ % 5 != 0) {
			print "DENIED\n";
			exit;
		}
	}
}
print "APPROVED\n";
