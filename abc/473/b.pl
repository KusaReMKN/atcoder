#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @a = split ' ', <STDIN>;

for my $k (0 .. $#a) {
	my @find = grep { $a[$_] eq $a[$k] } $k+1 .. $#a;
	my $len = @find;
	if ($len > 0) {
		$a[$k] = $a[$find[0]] = 0;
	}
}

my $sum = 0;
$sum += $_ for @a;
say $sum;
