#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @r = split ' ', <STDIN>;

my $cnt = 0;
for (1 .. $n-2) {
	$cnt++ if ($r[$_-1] < $r[$_] && $r[$_] > $r[$_+1]
				|| $r[$_-1] > $r[$_] && $r[$_] < $r[$_+1]);
}
say $cnt;
