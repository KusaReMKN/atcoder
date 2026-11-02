#! /usr/bin/env perl
use v5.38;

my ($n, $l, $r) = split ' ', <STDIN>;
my $cnt = 0;
for (1 .. $n) {
	chomp(my $t = <STDIN>);
	$cnt++ if $l <= $t && $t <= $r;
}
say $cnt;
