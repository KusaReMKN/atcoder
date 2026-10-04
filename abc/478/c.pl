#! /usr/bin/env perl
use v5.38;

my ($n, $k) = split ' ', <STDIN>;
my @a = split ' ', <STDIN>;
my @s = sort { $a <=> $b } @a;
#say join ' ', @s;

my $head = $n;
my $tail = 0;
for (0 .. $n-1) {
	if ($a[$_] != $s[$_]) {
		$head = $_ if ($_ < $head);
		$tail = $_ if ($_ > $tail);
	}
}
#printf "%d, %d\n", $head, $tail;
say $tail - $head <= $k - 1 ? 'Yes' : 'No';
