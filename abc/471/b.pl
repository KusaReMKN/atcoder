#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);

my %m;
for (1 .. $n) {
	chomp(my $s = <STDIN>);
	$m{uc($s)}++;
}

my $max = 0;
for (values(%m)) {
	$max = $_ if $max < $_;
}
say $max;
