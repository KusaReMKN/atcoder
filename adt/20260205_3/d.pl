#! /usr/bin/env perl
use v5.38;

my ($n, $m) = split ' ', <STDIN>;
chomp(my $s = <STDIN>);
chomp(my $t = <STDIN>);

my $min = 1e9;
for (0 .. $n-$m) {
	my $u = substr($s, $_, $m);
	my $cnt = 0;
	for (0 .. $m-1) {
		my $uc = substr($u, $_, 1);
		my $tc = substr($t, $_, 1);
		$cnt += (10+$uc - $tc) % 10;
	}
	$min = $cnt if $min > $cnt;
}
say $min;
