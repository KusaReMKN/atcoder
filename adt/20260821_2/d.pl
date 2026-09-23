#! /usr/bin/env perl
use v5.38;
use bignum;

my ($n, $k) = split ' ', <STDIN>;
my @a = split ' ', <STDIN>;

my $cur = 1;
for (@a) {
	$cur *= $_;
	$cur = 1 if length $cur > $k;
}
say $cur;
