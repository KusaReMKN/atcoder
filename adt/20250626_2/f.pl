#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @a = split ' ', <STDIN>;
my @r = reverse @a;

my %g;
my @v = ();
for (@a) {
	$g{$_}++;
	push @v, scalar keys %g;
}

%g = ();
my @w = ();
for (@r) {
	$g{$_}++;
	push @w, scalar keys %g;
}
@w = reverse @w;

my $max = 0;
for (0 .. $n-2) {
	my $t = $v[$_] + $w[$_+1];
	$max = $t if $max < $t;
}
say $max;
