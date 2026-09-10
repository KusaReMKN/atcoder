#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @a = split ' ', <STDIN>;

my $max = 1 + $a[1-1] - 1;
for (2 .. $n) {
	last if ($_ > $max);
	my $t = $_ + $a[$_-1] - 1;
	$max = $t if ($max < $t);
}
say $max > $n ? $n : $max;
