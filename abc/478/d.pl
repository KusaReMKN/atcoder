#! /usr/bin/env perl
use v5.38;

my ($n, $q) = split ' ', <STDIN>;
my @v;
for (1 .. $q) {
	my ($l, $r, $x) = split ' ', <STDIN>;
	$v[$l]{$x}++;
	$v[$r+1]{$x}--;
}
#printf "%s: %s\n", $_, join ',', keys %$_ for @v;

my %cur;
for my $i (1 .. $n) {
	for (keys %{$v[$i]}) {
		$cur{$_} += $v[$i]{$_};
		delete $cur{$_} if ($cur{$_} == 0);
	}
	printf "%d ", scalar keys %cur;
}
printf "\n";
