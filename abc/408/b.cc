#include <iostream>
#include <set>

int
main(void)
{
	int n;
	std::cin >> n;

	std::set<int> c;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		c.insert(a);
	}

	std::cout << c.size() << std::endl;
	for (const auto &e: c)
		std::cout << e << ' ';
	std::cout << std::endl;

	return 0;
}
