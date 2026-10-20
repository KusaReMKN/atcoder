#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my $cur = 0;
for (1 .. $n) {
	my ($a, $b) = split ' ', <STDIN>;
	my $max = $cur > $a ? $cur : $a;
	$cur = $max + $b;
}
say $cur;
