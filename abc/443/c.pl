#! /usr/bin/env perl
use v5.38;

my ($n, $t) = split ' ', <STDIN>;
my @a = split ' ', <STDIN>;

my $cnt = 0;
my $cho = 0;
for (@a) {
	my $min = $_ < $t ? $_ : $t;
	if ($cho < $min) {
		$cnt += $min - $cho;
		$cho = $_ + 100;
	}
}
$cnt += $t - $cho if ($t > $cho);
say $cnt;
