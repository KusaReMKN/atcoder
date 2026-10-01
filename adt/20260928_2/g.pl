#! /usr/bin/env perl
use v5.38;

my ($n, $q) = split ' ', <STDIN>;
my @a = split ' ', <STDIN>;
my @d = (0);
push @d, $d[-1] + $_ for @a;

for (1 .. $q) {
	my ($f, @v) = split ' ', <STDIN>;
	if ($f == 1) {
		my ($x) = @v;
		$d[$x+0] -= $a[$x-1];
		$d[$x+1] -= $a[$x-1] + $a[$x];
		($a[$x-1], $a[$x-0]) = ($a[$x-0], $a[$x-1]);
		$d[$x+0] += $a[$x-1];
		$d[$x+1] += $a[$x-1] + $a[$x];
	} else {
		my ($l, $r) = @v;
		say $d[$r] - $d[$l-1];
	}
}
