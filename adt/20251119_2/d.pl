#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @l = split ' ', <STDIN>;

my ($start, $end);
for (1 .. $n) {
	if ($l[$_-1] == 1) {
		$start = $_ if !$start;
		$end = $_;
	}
}
say $end - $start;
