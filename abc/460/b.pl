#! /usr/bin/env perl
use v5.38;

chomp(my $t = <STDIN>);
for (1 .. $t) {
	my ($x1, $y1, $r1, $x2, $y2, $r2) = split ' ', <STDIN>;
	my $dx = abs ($x1 - $x2);
	my $dy = abs ($y1 - $y2);
	my $dr = abs ($r1 - $r2);
	my $sr = $r1 + $r2;
	say $dr**2 <= $dx**2+$dy**2 && $dx**2+$dy**2 <= $sr**2 ? 'Yes' : 'No';
}
