#! /usr/bin/env perl
use v5.38;

my ($n, $k) = split ' ', <STDIN>;
my @t = split ' ', <STDIN>;

my $max = 0;
for (@t) {
	$max = $_ if ($max < $_);
}
say $max + $k;
