#! /usr/bin/env perl
use v5.38;

my ($t, $x, $y) = split ' ', <STDIN>;
chomp(my $a = <STDIN>);
my @a = split '', $a;
chomp(my $b = <STDIN>);
my @b = split '', $b;

my $cnt = 0;
for (0 .. $t-1) {
	$x += -1 + index 'LSR', $a[$_];
	$y += -1 + index 'LSR', $b[$_];
	$cnt++ if ($x == $y);
}
say $cnt;
