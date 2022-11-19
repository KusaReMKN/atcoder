#include <algorithm>
#include <iostream>
#include <utility>

int
main(void)
{
	int n;
	long k;
	std::vector<std::pair<int, int>> v;
	int res;

	std::cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int a, b;

		std::cin >> a >> b;
		v.push_back(std::make_pair(a, b));
	}
	std::sort(v.begin(), v.end(), std::less<std::pair<int, int>>{});
	int i;
	for (i = 0; i < v.size() && k > v[i].second; i++)
		k -= v[i].second;
	std::cout << v[i].first << std::endl;

	return 0;
}
