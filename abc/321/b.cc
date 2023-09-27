#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

static int
f(int k, std::vector<int> a)
{
	a.push_back(k);
	std::sort(a.begin(), a.end());
	return std::reduce(a.begin()+1, a.end()-1);
}

int
main(void)
{
	int n, x;
	std::cin >> n >> x;

	std::vector<int> a(n-1);
	for (auto &e: a)
		std::cin >> e;

	for (int i = 0; i <= 100; i++)
		if (f(i, a) >= x) {
			std::cout << i << std::endl;
			return 0;
		}
	std::cout << -1 << std::endl;

	return 0;
}
