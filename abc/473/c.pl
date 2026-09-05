#! /usr/bin/env perl
use v5.38;

my ($n, $k) = split ' ', <STDIN>;
my @a = split ' ', <STDIN>;

my @c = (0) x $k;
$c[$_-1]++ for @a;
@c = sort { $b <=> $a } @c;

my $cnt = 0;
for (@c) {
	$cnt++ if $c[0] - $_ <= 1;
}
say $cnt;
