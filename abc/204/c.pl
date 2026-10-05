#! /usr/bin/env perl
use v5.38;

my ($n, $m) = split ' ', <STDIN>;

my @graph;
@graph[$_] = [] for (1 .. $n);
for (1 .. $m) {
	my ($a, $b) = split ' ', <STDIN>;
	push @{$graph[$a]}, $b;
}

my $cnt = 0;
for (1 .. $n) {
	my @queue = ($_);
	my %visited = ( $_ => 1);
	while (my $next = pop @queue) {
		for (@{$graph[$next]}) {
			if (!$visited{$_}) {
				push @queue, $_;
				$visited{$_}++;
			}
		}
	}
	#printf "%d: %s\n", $_, join ',', keys %visited;
	$cnt += scalar keys %visited;
}
say $cnt;
