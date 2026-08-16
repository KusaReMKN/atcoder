#! /usr/bin/env perl
use v5.38;

my ($n, $l, $w) = split ' ', <STDIN>;
my @d = split ' ', <STDIN>;

my $cnt = 0;
foreach (@d) {
	$cnt++ if $l-$w <= $_ && $_ <= $l+$w;
}
say $cnt;
