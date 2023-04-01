#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	std::string s;
	for (int i = 8; i > 0; i--) {
		std::cin >> s;
		auto t = s.find('*');
		if (t != std::string::npos) {
			std::cout << (char)('a' + t) << i << std::endl;
			return 0;
		}
	}

	return -1;
}
