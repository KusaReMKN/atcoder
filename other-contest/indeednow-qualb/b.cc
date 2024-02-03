#include <algorithm>
#include <iostream>
#include <string>

int
main(void)
{
	std::string s, t;
	std::cin >> s >> t;

	for (int i = 0; i <= s.size(); i++) {
		if (s == t) {
			std::cout << i << std::endl;
			return 0;
		}
		std::rotate(s.rbegin(), s.rbegin()+1, s.rend());
	}
	std::cout << -1 << std::endl;

	return 0;
}
