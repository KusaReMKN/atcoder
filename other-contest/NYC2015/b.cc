#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<long> a(n);
	for (auto &e: a)
		std::cin >> e;
	std::sort(a.begin(), a.end());

	long sum = 0;
	int cnt = 0;
	for (const auto &e: a)
		if (e > sum)
			sum += e, cnt++;
	std::cout << cnt << std::endl;

	return 0;
}
