#! /usr/bin/env perl
use v5.38;

my ($n, $m, $k) = split ' ', <STDIN>;
my @h = sort { $a <=> $b } split ' ', <STDIN>;
pop @h while scalar @h > $k;
my @b = sort { $a <=> $b } split ' ', <STDIN>;
shift @b while scalar @b > $k;

my $yes = 1;
for (0 .. $k-1) {
	$yes = 0 if $h[$_] > $b[$_];
}
say $yes ? 'Yes' : 'No';
