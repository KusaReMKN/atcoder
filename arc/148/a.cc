#include <cstdlib>
#include <iostream>
#include <numeric>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	std::vector<int> d(n);
	d[0] = std::abs(a[0] - a.back());
	for (int i = 1; i < n; i++)
		d[i] = std::abs(a[i] - a[i-1]);

	auto gcd = d[0];
	for (int i = 1; i < n; i++)
		gcd = std::gcd(gcd, d[i]);
	std::cout << (gcd == 1 ? 2 : 1) << std::endl;

	return 0;
}
