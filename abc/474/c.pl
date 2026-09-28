#! /usr/bin/env perl
use v5.38;

my ($n, $q) = split ' ', <STDIN>;
my @p = split ' ', <STDIN>;
my %g;
my $cnt = 0;
$g{$_} = ++$cnt for @p;
for (1 .. $q) {
	chomp(my $a = <STDIN>);
	$g{$a} = ++$cnt;
}
say join ' ', sort { $g{$a} <=> $g{$b} } keys %g;
