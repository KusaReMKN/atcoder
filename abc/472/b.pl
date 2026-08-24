#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @l = split ' ', <STDIN>;

my @s = (0);
push @s, $s[-1] + $_ for @l;

my $min = $s[-1];
for (@s) {
	my $diff = abs($s[-1] - 2*$_);
	$min = $diff if ($diff < $min);
}
say $min;
