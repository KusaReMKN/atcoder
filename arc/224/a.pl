#! /usr/bin/env perl
use v5.38;

chomp(my $t = <STDIN>);
for (1 .. $t) {
	chomp(my $k = <STDIN>);
	for (1 .. 100) {
		if (($k * $_) =~ /00/) {
			say $k * $_;
			last;
		}
	}
}
