#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
chomp(my $s = <STDIN>);
chomp(my $t = <STDIN>);
$t =~ s/\*/./g;
say $s =~ $t ? 'Yes' : 'No';
