#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>

int
main(void)
{
	char yc[5], mc[3], dc[3];
	std::scanf("%4s/%2s/%2s", yc, mc, dc);

	std::string y(yc), m(mc), d(dc);
	m += d;
	std::sort(y.begin(), y.end());
	std::sort(m.begin(), m.end());

	std::cout << (y == m ? "yes" : "no") << std::endl;

	return 0;
}
