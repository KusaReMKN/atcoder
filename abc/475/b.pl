#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @a = split ' ', <STDIN>;

my @c = ( 0, 0, 0 );
for my $rem (@a) {
	$rem = 1000 - $rem % 1000;
	for (0 .. $#c) {
		$c[$_] += $rem % 10;
		$rem = int($rem / 10);
	}
}
say join(' ', @c);
