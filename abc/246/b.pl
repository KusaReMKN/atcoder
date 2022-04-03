#!/usr/bin/env perl
use strict;

$_ = <>;
my ($a, $b) = split;
printf "%f %f\n", sin(atan2($a, $b)), cos(atan2($a, $b));
