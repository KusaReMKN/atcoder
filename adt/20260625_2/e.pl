#! /usr/bin/env perl
use v5.38;

my ($n, $m) = split ' ', <STDIN>;
my @w = (0) x ($n+1);
for (1 .. $m) {
	my ($l, $r) = split ' ', <STDIN>;
	$w[$l-1]++;
	$w[$r]--;
}
pop @w;

my $cur = 0;
my $min = $m;
foreach (@w) {
	$cur += $_;
	$min = $cur if ($cur < $min);
}
say $min;
