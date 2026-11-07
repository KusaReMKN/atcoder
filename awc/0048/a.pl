#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
for (1 .. $n) {
	my ($s, $k) = split ' ', <STDIN>;
	say (($k + ($s eq 'Yes')) % 2 > 0 ? 'Yes' : 'No');
}
