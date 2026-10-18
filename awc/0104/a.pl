#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @a = split ' ', <STDIN>;

my $dup = 0;
my $index = 0;
for (1 .. $#a) {
	$dup++ if ($a[$index] == $a[$_]);
	if ($a[$index] < $a[$_]) {
		$dup = 0;
		$index = $_;
	}
}
say $dup ? -1 : $index+1;
