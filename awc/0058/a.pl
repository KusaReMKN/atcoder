#! /usr/bin/env perl
use v5.38;

my ($n, $p, $t, $c) = split ' ', <STDIN>;
my @s = split ' ', <STDIN>;

my $max = 0;
$max < $_ && ($max = $_) for @s;

if ($p >= $t) {
	say 0;
} elsif ($max < $t) {
	say -1;
} else {
	say $c;
}
