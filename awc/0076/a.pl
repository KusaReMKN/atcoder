#! /usr/bin/env perl
use v5.38;

my ($s, $p, $r) = split ' ', <STDIN>;
chomp(my $m = <STDIN>);
for (1 .. $m) {
	my ($e, $v) = split ' ', <STDIN>;
	if ($e == 1) {
		$s += $v;
	} else {
		$s -= $v * $p;
	}
}
say $s - $r;
