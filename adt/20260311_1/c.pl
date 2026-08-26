#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @a;
push @a, [(0)x$n] for 1 .. $n;

my ($r, $c) = (0, ($n-1) / 2);
for (1 .. $n*$n) {
	$a[$r][$c] = $_;
	if ($a[($r+$n-1)%$n][($c+1)%$n] == 0) {
		($r, $c) = (($r+$n-1) % $n, ($c+1) % $n);
	} else {
		($r, $c) = (($r+1) % $n, $c);
	}
}

say join(' ', @$_) for @a;
