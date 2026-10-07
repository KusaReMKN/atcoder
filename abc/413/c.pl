#! /usr/bin/env perl
use v5.38;

chomp(my $q = <STDIN>);

my @queue;
for (1 .. $q) {
	my ($f, @a) = split ' ', <STDIN>;
	if ($f == 1) {
		push @queue, @a;
	} else {
		my $sum = 0;
		my ($k) = @a;
		while ($k > 0) {
			my $c = shift @queue;
			my $x = shift @queue;
			my $min = $c < $k ? $c : $k;
			$sum += $min * $x;
			$c -= $min;
			$k -= $min;
			unshift @queue, $c, $x if ($c > 0);
		}
		say $sum;
	}
}
