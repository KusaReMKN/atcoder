#include <algorithm>
#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	auto n = s.size();
	for (int i = n; i > 0; i--)
		for (int j = 0; j < n-i+1; j++) {
			auto t = s.substr(j, i);
			auto u(t);
			std::reverse(t.begin(), t.end());
			if (t == u) {
				std::cout << i << std::endl;
				return 0;
			}
		}

	return -1;
}
