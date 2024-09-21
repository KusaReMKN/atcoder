#include <algorithm>
#include <iostream>
#include <string>

static bool
check(int x, int y, std::string &s)
{
	return x < y && s == "<" || x > y && s == ">";
}

int
main(void)
{
	std::string sab, sac, sbc;
	std::cin >> sab >> sac >> sbc;

	std::string o("ABC");
	do {
		auto a = o.find('A');
		auto b = o.find('B');
		auto c = o.find('C');
		if (check(a, b, sab) && check(a, c, sac) && check(b, c, sbc)) {
			std::cout << o[1] << std::endl;
			return 0;
		}
	} while (std::next_permutation(o.begin(), o.end()));

	return -1;
}
