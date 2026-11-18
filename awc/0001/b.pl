#! /usr/bin/env perl
use v5.38;

my ($n, $l, $r) = split ' ', <STDIN>;
my @p = split ' ', <STDIN>;

my $max = -1;
for my $i (0 .. $n-1) {
	my $t = $p[$i];
	if ($l <= $t && $t <= $r) {
		$max = $i+1 if ($max == -1 || $p[$max-1] < $t);
	}
}
say $max;
