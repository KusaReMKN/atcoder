#!/usr/bin/env perl

<>;
while (<>) {
	$s{$_}++;
}

$max = 0;
while (($k, $v) = each %s) {
	if ($max < $v) {
		$who = $k;
		$max = $v;
	}
}

print $who;
