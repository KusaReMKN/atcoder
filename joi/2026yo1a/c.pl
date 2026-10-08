#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @a = split ' ', <STDIN>;
my @b = split ' ', <STDIN>;

for (0 .. $n-1) {
	say $a[$_];
	say $b[$_];
}
