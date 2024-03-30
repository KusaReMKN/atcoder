#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	std::vector<int> b;
	std::copy_if(a.begin(), a.end(), std::back_inserter(b),
			[&](auto x) { return x % k == 0; });
	for (auto &e: b)
		std::cout << e/k << ' ';
	std::cout << std::endl;

	return 0;
}
