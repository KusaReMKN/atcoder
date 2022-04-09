#!/usr/bin/env perl
use strict;

my $n = <>;
my %names = ();
foreach (1..$n) {
	my $st = <>;
	$names{$st}++;
	if ($names{$st} != 1) {
		print "Yes\n";
		exit;
	}
}
print "No\n";
