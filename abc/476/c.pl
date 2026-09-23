#! /usr/bin/env perl
use v5.38;

chomp(my $n = <STDIN>);
my @a = split ' ', <STDIN>;

my @v = sort { $b <=> $a } @a[0..1], -1;

for (2 .. $#a) {
	@v = sort { $b <=> $a } @v, $a[$_];
	pop @v;
	say $v[-1];
}
