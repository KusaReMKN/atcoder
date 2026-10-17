#! /usr/bin/env perl
use v5.38;

my ($n, $q) = split ' ', <STDIN>;
my @a = split ' ', <STDIN>;
chomp(my $s = <STDIN>);

my $cur = 0;
my $sum = 0;
for (split '', $s) {
	if ($_ eq 'R') {
		$cur = ($cur + 1 + $n) % $n;
	} else {
		$cur = ($cur - 1 + $n) % $n;
	}
	$sum += $a[$cur];
}
say $sum;
