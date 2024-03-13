#include <iostream>
#include <string>

int
main(void)
{
	int a;
	std::cin >> a;

	std::string s;
	std::cin >> s;

	bool zero = a == 0;
	for (const auto &c: s) {
		a += (c == '-' ? -1 : 1);
		zero |= a == 0;
	}
	std::cout << (zero ? "Yes" : "No") << std::endl;

	return 0;
}
