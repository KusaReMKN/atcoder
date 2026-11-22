#! /usr/bin/env perl
use v5.38;

my ($b, $r) = split ' ', <STDIN>;
say ((30-$b) * (30-$r));
