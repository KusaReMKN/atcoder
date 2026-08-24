#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @a = split ' ', <STDIN>;

my @s = (0);
push @s, $s[-1]+$_ for @a;

my $cnt = 0;
for my $l (1 .. $n+1) {
	for my $r ($l .. $n) {
		my $sum = $s[$r]-$s[$l-1];
		my $yes = 1;
		for ($l .. $r) {
			$yes = 0 if $sum % $a[$_-1] == 0;
		}
		$cnt++ if $yes;
	}
}
say $cnt;
