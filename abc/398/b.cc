#include <iostream>
#include <map>

int
main(void)
{
	std::map<int, int> m;
	for (int i = 0; i < 7; i++) {
		int a;
		std::cin >> a;
		m[a]++;
	}

	std::map<int, int> c;
	for (const auto &e: m)
		c[e.second]++;

	int c0, c1;
	c0 = c1 = 0;
	for (const auto &e: m)
		if (e.second > c0) {
			c1 = c0;
			c0 = e.second;
		} else if (e.second > c1) {
			c1 = e.second;
		}
	if (c0 >= 3 && c1 >= 2)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;

	return 0;
}
