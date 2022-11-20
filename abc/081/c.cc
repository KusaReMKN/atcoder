#include <algorithm>
#include <iostream>
#include <map>
#include <utility>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::map<int, int> m;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		m[a]++;
	}

	std::vector<std::pair<int, int>> v;
	for (auto elem: m)
		v.push_back(elem);
	std::sort(v.begin(), v.end(),
			[](auto a, auto b) { return b.second < a.second; });
	for (auto elem: v)
		std::cerr << elem.first << ":" << elem.second << std::endl;

	int sum = 0;
	while (v.size() > k) {
		sum += v.back().second;
		v.pop_back();
	}
	std::cout << sum << std::endl;

	return 0;
}
