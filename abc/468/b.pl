#! /usr/bin/env perl
use v5.38;

my ($m, $d) = split ' ', <STDIN>;
chomp(my $s = <STDIN>);
$s = '#'x$d . $s . '#'x$d;

my $cnt = 0;
for ($d .. $d+$m-1) {
	my $t = substr($s, $_-$d, 2*$d+1);
	$cnt++ if index($t, 'G') == -1;
}
say $cnt;
