#! /usr/bin/env perl
use v5.38;

my ($n, $m) = split ' ', <STDIN>;
chomp(my $s = <STDIN>);
my $spattern = '^[' . $s .']*$';
chomp(my $t = <STDIN>);
my $tpattern = '^[' . $t .']*$';

chomp(my $q = <STDIN>);
for (1 .. $q) {
	chomp(my $w = <STDIN>);
	if ($w =~ $spattern && $w =~ $tpattern) {
		say 'Unknown';
	} elsif ($w =~ $spattern) {
		say 'Takahashi';
	} else {
		say 'Aoki';
	}
}
