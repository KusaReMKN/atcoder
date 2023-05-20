#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int
main(void)
{
	int n, m;
	long d;
	std::cin >> n >> m >> d;

	std::vector<unsigned long> a(n);
	for (auto &e: a)
		std::cin >> e;
	std::sort(a.rbegin(), a.rend());

	std::vector<unsigned long> b(m);
	for (auto &e: b)
		std::cin >> e;
	std::sort(b.rbegin(), b.rend());

	int ap = 0, bp = 0;
	while (ap < n && bp < m) {
		if (std::llabs((long)a[ap] - b[bp]) <= d) {
			std::clog << a[ap] << ":" << b[bp] << std::endl;
			std::cout << a[ap] + b[bp] << std::endl;
			return 0;
		}
		if (a[ap] > b[bp])
			ap++;
		else
			bp++;
	}
	std::cout << -1 << std::endl;

	return 0;
}
