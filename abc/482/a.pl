#! /usr/bin/env perl
use v5.38;

chomp(my $s = <STDIN>);
my $n = grep { /o/ } split '', $s;
say $n % 2 == 0 ? 'even' : 'odd';
