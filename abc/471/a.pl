#! /usr/bin/env perl
use v5.38;

my ($a, $b) = split ' ', <STDIN>;

my @res = ($a+$b, $a-$b, $a*$b, $a/$b);
foreach (@res) {
	if ($_ == 9) {
		say 'Nine';
		exit;
	}
}
say 'Nein';
