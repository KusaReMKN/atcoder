#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;
	std::sort(a.begin(), a.end());

	std::copy(a.begin(), a.end(),
			std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	return 0;
}
