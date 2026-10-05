#! /usr/bin/env perl
use v5.38;

my ($n, $m, $k) = split ' ', <STDIN>;
my @a = split ' ', <STDIN>;

my @queue = (0) x $m;
my $sum = 0;
for (@a) {
	$sum -= shift @queue;
	if ($sum + $_ <= $k) {
		say 'Yes';
		push @queue, $_;
		$sum += $_;
	} else {
		say 'No';
		push @queue, 0;
	}
}
