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

	std::vector<int> b(n-1);
	for (auto &e: b)
		std::cin >> e;
	std::sort(b.begin(), b.end());

	std::vector<int> r;
	while (a.size() > 0) {
		if (b.back() < a.back())
			r.push_back(a.back());
		else
			b.pop_back();
		a.pop_back();
	}

	if (r.size() > 1)
		std::cout << -1 << std::endl;
	else
		std::cout << r[0] << std::endl;

	return 0;
}
