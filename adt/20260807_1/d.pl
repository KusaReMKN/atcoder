#! /usr/bin/env perl
use v5.38;

my ($n, $m) = split ' ', <STDIN>;
my @t = (1) x $m;

for (1 .. $n) {
	chomp(my $l = <STDIN>);
	my @x = split ' ', <STDIN>;
	my $d = 0;
	for (@x) {
		if ($t[$_-1]) {
			$d = $_;
			$t[$_-1] = 0;
			last;
		}
	}
	say $d;
}
