#! /usr/bin/env perl
use v5.38;

my ($h, $w, $n) = split ' ', <STDIN>;

my @a;
push @a, [split ' ', <STDIN>] for (1 .. $h);

my %b;
for (1 .. $n) {
	chomp(my $b = <STDIN>);
	$b{$b} = 1;
}

my $max = 0;
for (@a) {
	my $i = grep { $b{$_} } @$_;
	$max = $max > $i ? $max : $i
}
say $max;
