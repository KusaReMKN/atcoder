#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> p(n);
	for (auto &e: p)
		std::cin >> e;

	auto isSaikyo = true;
	for (int i = 1; i < n; i++)
		if (p[i] >= p[0]) {
			isSaikyo = false;
			break;
		}
	if (isSaikyo)
		std::cout << 0;
	else
		std::cout << *std::max_element(p.begin(), p.end()) - p[0] + 1;
	std::cout << std::endl;

	return 0;
}

