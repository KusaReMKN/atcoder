#include <algorithm>
#include <iostream>
#include <set>
#include <utility>

int
main(void)
{
	int n;
	std::cin >> n;

	std::set<std::pair<int, int>> s;
	for (int i = 0; i < n; i++) {
		int a, b;
		std::cin >> a >> b;
		s.insert({ std::min(a, b), std::max(a, b) });
	}
	std::cout << s.size() << std::endl;

	return 0;
}
