#! /usr/bin/env perl
use v5.38;

my ($n, $q) = split ' ', <STDIN>;
my @a = split ' ', <STDIN>;
my @b = split ' ', <STDIN>;

sub arrmin {
	my ($a, $b, $i) = @_;
	$a[$i-1] < $b[$i-1] ? $a[$i-1] : $b[$i-1];
}

my $sum = 0;
$sum += arrmin(\@a, \@b, $_) for (1 .. $n);

for (1 .. $q) {
	my ($c, $x, $v) = split ' ', <STDIN>;
	$sum -= arrmin(\@a, \@b, $x);
	if ($c eq 'A') {
		$a[$x-1] = $v;
	} else {
		$b[$x-1] = $v;
	}
	say $sum += arrmin(\@a, \@b, $x);
}
