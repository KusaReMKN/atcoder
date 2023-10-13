#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	std::vector<int> v(3);

	for (auto &e: v)
		std::cin >> e;
	std::sort(v.begin(), v.end());
	std::cout << (v[0]+v[1] == v[2]) << std::endl;

	return 0;
}
