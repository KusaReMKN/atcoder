#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);

my $cnt = 0;
for (1 .. $n) {
	my ($t, $s) = split ' ', <STDIN>;
	$cnt++ if ($t ne $s);
}
say $cnt;
