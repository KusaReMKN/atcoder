#! /usr/bin/env perl
use v5.38;

my ($n, $m) = split ' ', <STDIN>;
chomp(my $s = <STDIN>);
chomp(my $t = <STDIN>);
my @s = split '', $s;
my @t = split '', $t;


my @v = (0) x ($n + 1);
for (1 .. $m) {
	my ($l, $r) = split ' ', <STDIN>;
	$v[$l-1]++;
	$v[$r-0]--;
}

my $d = 0;
for (0 .. $n-1) {
	$d += $v[$_];
	print $d % 2 == 0 ? $s[$_] : $t[$_];
}
print "\n";
