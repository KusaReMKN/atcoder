#! /usr/bin/env perl
use v5.38;

my ($a, $b, $c) = split ' ', <STDIN>;
my $req = $b - $a;
$req = 0 if ($req < 0);
say $c * $req;
