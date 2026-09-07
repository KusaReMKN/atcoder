#! /usr/bin/env perl
use v5.38;

chomp(my $x = <STDIN>);
say $x == 1 ? 2 : 1;
