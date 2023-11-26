#include <iostream>
#include <vector>

int
main(void)
{
	int k;
	std::cin >> k;

	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	int m;
	std::cin >> m;

	std::vector<int> b(m);
	for (auto &e: b)
		std::cin >> e;

	int cnt = 0;
	for (const auto &e: a)
		for (const auto &v: b)
			if (e + k == v)
				cnt++;
	std::cout << cnt << std::endl;

	return 0;
}
