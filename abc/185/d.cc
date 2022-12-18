#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> aa(m);
	for (auto &a: aa)
		std::cin >> a;
	aa.push_back(n+1);
	std::sort(aa.begin(), aa.end());

	int last = 0;
	int min = n;
	for (const auto &a: aa) {
		if (a - last - 1 != 0)
			if (a - last - 1 < min)
				min = a - last - 1;
		last = a;
	}
	std::clog << "stamp: " << min << std::endl;

	long sum = 0;
	last = 0;
	for (const auto &a: aa) {
		std::clog << a - last - 1 << std::endl;
		sum += (a - last - 1) / min;
		if ((a - last - 1) % min != 0)
			sum++;
		last = a;
	}
	std::cout << sum << std::endl;

	return 0;
}
