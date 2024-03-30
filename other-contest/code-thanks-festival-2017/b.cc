#include <algorithm>
#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	for (int i = 0; i < s.size(); i++) {
		auto t = s.substr(i);
		auto r = t;
		std::ranges::reverse(r);
		if (t == r) {
			std::cout << i << std::endl;
			return 0;
		}
	}

	return -1;
}
