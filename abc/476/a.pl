#! /usr/bin/env perl
use v5.38;

chomp(my $s = <STDIN>);
$s .= 'e' if ($s !~ /e$/);
say $s . 'r';
