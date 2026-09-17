#! /usr/bin/env perl
use v5.38;

my ($n, $m) = split ' ', <STDIN>;

my @g;
$g[$_] = 1 for (1 .. $n);

for (1 .. $m) {
	my ($a, $b) = split ' ', <STDIN>;
	$g[$a]++;
	$g[$b]++;
}

for (1 .. $n) {
	my $v = $n - $g[$_];
	my $p = 1;
	$p = int($p * ($v - $_ + 1) / $_) for (1 .. 3);
	$g[$_] = $p;
}
shift @g;

say join ' ', @g;
