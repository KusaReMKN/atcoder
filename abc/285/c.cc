#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	long res = 0;
	for (const auto &c: s) {
		res += c - 'A' + 1L;
		res *= 'Z' - 'A' + 1;
	}
	std::cout << (res /= 'Z'-'A'+1) << std::endl;

	return 0;
}
