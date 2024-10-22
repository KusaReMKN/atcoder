#include <iostream>
#include <utility>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	int cur = 0;
	std::vector<std::pair<int, int>> v;
	v.push_back({ -1, 0 });
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		cur++;
		if (v.back().first == a)
			v.back().second++;
		else
			v.push_back({ a, 1 });

		if (v.back().first == v.back().second) {
			cur -= v.back().second;
			v.pop_back();
		}
		std::cout << cur << std::endl;
	}

	return 0;
}
