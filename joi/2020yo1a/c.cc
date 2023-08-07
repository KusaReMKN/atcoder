#include <iostream>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> a(n), b(m);
	for (auto &e: a)
		std::cin >> e;
	for (auto &e: b)
		std::cin >> e;

	std::vector<int> c;
	std::merge(a.begin(), a.end(), b.begin(), b.end(),
			std::back_inserter(c));
	for (const auto &e: c)
		std::cout << e << std::endl;

	return 0;
}
