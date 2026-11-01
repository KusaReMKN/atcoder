#! /usr/bin/env perl
use v5.38;

chomp(my $s = <STDIN>);
my @s = split '', $s;

my $cur = 0;
my $max = $cur;
for (@s) {
	$cur++ if $_ eq '(';
	$cur-- if $_ eq ')';
	$max = $cur if $max < $cur;
}
say $max;
