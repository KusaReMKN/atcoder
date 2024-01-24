#include <cstdlib>
#include <iostream>

int
main(void)
{
	long a, m, l, r;
	std::cin >> a >> m >> l >> r;

	l -= a;
	r -= a;

	auto dr = std::div(r, m);
	auto dl = std::div(l, m);
	auto sum = dr.quot - dl.quot;

	auto sr = r == 0 ? 0 : r > 0 ? 1 : -1;
	auto sl = l == 0 ? 0 : l > 0 ? 1 : -1;
	sum += sr != sl
		|| sr == 0 && sl == 0
		|| sum == 0 && (dr.rem == 0 || dl.rem == 0)
		|| sr == sl && dr.rem == 0 && dl.rem == 0;

	std::cout << sum << std::endl;

	return 0;
}
