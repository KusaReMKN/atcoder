#include <iostream>

int
main(void)
{
	std::string s;
	std::cin >> s;

	bool minus = false;
	int sum = 0;
	for (const auto &c: s) {
		int d = c - '0';
		sum += minus ? -d : +d;
		minus = !minus;
	}
	std::cout << sum << std::endl;

	return 0;
}
