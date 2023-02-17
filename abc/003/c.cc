#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector<int> r(n);
	for (auto &e: r)
		std::cin >> e;
	std::sort(r.rbegin(), r.rend());

	double c = 0.0;
	for (auto itr = r.rend() - k; itr != r.rend(); itr++)
		c += *itr, c /= 2.0;
	std::cout << std::setprecision(9) << c << std::endl;

	return 0;
}
