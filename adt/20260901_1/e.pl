#! /usr/bin/env perl
use v5.38;

my ($n, $m) = split ' ', <STDIN>;

my %g;
my $cnt = 0;
for (1 .. $m) {
	my ($r, $c) = split ' ', <STDIN>;
	my $yes = 1;
	for my $x (0, 1) {
		for my $y (0, 1) {
			my $R = $r + $y;
			my $C = $c + $x;
			$yes = 0 if ($g{$R.','.$C});
		}
	}
	if ($yes) {
		for my $x (0, 1) {
			for my $y (0, 1) {
				my $R = $r + $y;
				my $C = $c + $x;
				$g{$R.','.$C} = 1;
			}
		}
		$cnt++;
	}
}
say $cnt;
