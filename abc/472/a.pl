#! /usr/bin/env perl
use v5.38;

chomp(my $s = <STDIN>);
$s =~ s/[^A]/./g;
say $s;
