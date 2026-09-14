#! /usr/bin/env perl
use v5.38;

my ($n, $m) = split ' ', <STDIN>;
my @s;
for (1 .. $n) {
	chomp(my $t = <STDIN>);
	push @s, $t;
}

my %p;
for my $y (0 .. $n-$m) {
	for my $x (0 .. $n-$m) {
		my @k;
		push @k, substr $s[$_], $x, $m for ($y .. $y+$m-1);
		$p{join '', @k} = 1;
	}
}
say scalar keys %p;
