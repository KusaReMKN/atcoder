#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);

my @m;
push @m, [ ('?') x $n ] for (1 .. $n);

for my $i (1 .. $n) {
	my $j = $n + 1 - $i;
	if ($i <= $j) {
		my $c = $i % 2 == 1 ? '#' : '.';
		for my $y ($i .. $j) {
			$m[$y-1][$_-1] = $c for ($i .. $j);
		}
	}
}

for (@m) {
	print $_ for @$_;
	print "\n";
}
