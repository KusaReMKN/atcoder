#! /usr/bin/env perl
use v5.38;

chomp(my ($n, $k) = split ' ', <STDIN>);
my $cnt = 0;
for (my $i = 0; $i < $n; $i++) {
	chomp(my ($a, $b) = split ' ', <STDIN>);
	if ($a * $b >= $k) {
		$cnt++;
	}
}
say $cnt;
