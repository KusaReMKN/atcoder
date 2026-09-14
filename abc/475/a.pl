#! /usr/bin/env perl
use v5.38;

chomp(my $s = <STDIN>);
say join 'o', split '', $s;
