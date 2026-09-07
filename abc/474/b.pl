#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @p = split ' ', <STDIN>;

my $yes = 1;
for (0 .. $#p) {
	if (int($_ / 10) != int(($p[$_]-1) / 10)) {
		$yes = 0;
	}
}
say $yes ? 'Yes' : 'No';
