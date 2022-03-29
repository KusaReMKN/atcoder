#!/use/bin/env perl
use POSIX ceil;

<>;
chomp($_ = <>);

$s = $n = 0;
foreach (split) {
	if ($_ != 0) {
		$s += $_;
		$n++;
	}
}

print ceil($s / $n), "\n";
