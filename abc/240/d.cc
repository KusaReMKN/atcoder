#include <iostream>
#include <utility>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::pair<int, int>> v;
	v.push_back({ -1, 0 });
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		if (v.back().first == a)
			v.back().second++;
		else
			v.push_back({ a, 1 });
		if (v.back().first == v.back().second)
			v.pop_back();

		int cnt = 0;
		for (const auto &e: v)
			cnt += e.second;
		std::cout << cnt << std::endl;
	}

	return 0;
}
