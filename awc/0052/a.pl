#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @a = split ' ', <STDIN>;

my $max = 1;
my $cur = 1;
my $a0 = shift @a;
for (@a) {
	if ($a0 < $_) {
		$cur++;
	} else {
		$cur = 1;
	}
	$max = $cur if ($max < $cur);
	$a0 = $_;
}
say $max;
