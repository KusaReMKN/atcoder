#include <algorithm>
#include <array>
#include <iostream>

int
main(void)
{
	std::array<int, 3> v;
	for (auto &e: v)
		std::cin >> e;
	std::sort(v.begin(), v.end());

	if (v[0]+v[1] == v[2] || v[0] == v[1] && v[1] == v[2])
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;

	return 0;
}
