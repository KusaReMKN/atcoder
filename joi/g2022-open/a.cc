#include <algorithm>
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
	std::sort(a.begin(), a.end());

	auto sum = std::reduce(a.begin()+1, a.end()-1);
	std::cout << sum << std::endl;

	return 0;
}
