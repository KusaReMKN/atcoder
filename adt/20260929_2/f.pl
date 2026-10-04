#! /usr/bin/env perl
use v5.38;

my ($n, $m) = split ' ', <STDIN>;

my %g;
for (1 .. $m) {
	my ($a, $b) = split ' ', <STDIN>;
	$g{$a} = {} if !$g{$a};
	$g{$a}{$b} = 1;
	$g{$b} = {} if !$g{$b};
	$g{$b}{$a} = 1;
}
#printf "%s: %s\n", $_, join ',', keys %{$g{$_}} for keys %g;

my (%k, %v);
for (1 .. $n) {
	next if $k{$_};
	my @s = ($_);
	while (my $s = pop @s) {
		$k{$s} = $_;
		$v{$s} = 1;
		for (keys %{$g{$s}}) {
			if (!$v{$_}) {
				push @s, $_;
				$v{$_} = 1;
			}
		}
	}
}
#printf "%s: %s\n", $_, $k{$_} for keys %k;

my (%r, %e);
for (keys %k) {
	$r{$k{$_}}++;
	$e{$k{$_}} += scalar %{$g{$_}};
}
#printf "%s: %d, %d\n", $_, $r{$_}, $e{$_}/2 for keys %r;

my $cnt = 0;
for (keys %r) {
	$e{$_} /= 2;
	$cnt += $e{$_} - $r{$_} + 1 if $e{$_} >= $r{$_};
}
say $cnt;
