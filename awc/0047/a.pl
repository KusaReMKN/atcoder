#! /usr/bin/env perl
use v5.38;

my ($n, $k) = split ' ', <STDIN>;
my $cnt = 0;
chomp(my $t0 = <STDIN>);
for (2 .. $n) {
	chomp(my $t = <STDIN>);
	$cnt++ if (abs($t - $t0) >= $k);
	$t0 = $t;
}
say $cnt;
