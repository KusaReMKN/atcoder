#! /usr/bin/env perl
use v5.38;

my ($n, $v) = split ' ', <STDIN>;
my @w = split ' ', <STDIN>;

my $max = 0;
for my $i (1 .. $n) {
	for my $j ($i+1 .. $n) {
		for my $k ($j+1 .. $n) {
			next if ($i + $j + $k > $v);
			my $score = $w[$i-1] + $w[$j-1] + $w[$k-1];
			$max = $score if ($max < $score);
		}
	}
}
say $max;
