#! /usr/bin/env perl
use v5.38;

chomp(my ($n, $k) = split ' ', <STDIN>);
my @a = split ' ', <STDIN>;

my %m;
$m{$_}++ for (@a);

my @k = sort { $b*$m{$b} <=> $a*$m{$a} } keys %m;
my $l = $k < @k ? $k : @k;
delete $m{$_} for (@k[0 .. $l-1]);

my $sum = 0;
$sum += $_ * $m{$_} for (keys %m);
say $sum;
