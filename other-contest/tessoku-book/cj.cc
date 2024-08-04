#include <algorithm>
#include <iostream>
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

	int q;
	std::cin >> q;
	for (int i = 0; i < q; i++) {
		int x;
		std::cin >> x;
		auto itr = std::lower_bound(a.begin(), a.end(), x);
		std::cout << itr - a.begin() << std::endl;
	}

	return 0;
}
