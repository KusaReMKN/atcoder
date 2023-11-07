#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	std::vector<int> s(4);
	for (auto &e: s)
		std::cin >> e;
	std::sort(s.begin(), s.end());

	int h, g;
	std::cin >> h >> g;

	std::cout << s[1] + s[2] + s[3] + std::max(h, g) << std::endl;

	return 0;
}
