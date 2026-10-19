#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
for (1 .. $n) {
	my ($h, $m) = split ' ', <STDIN>;
	$h += int($m / 60);
	my $d = int($h / 24);
	printf "%d %d %d\n", $d, $h % 24, $m % 60;
}
