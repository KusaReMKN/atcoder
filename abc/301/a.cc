#include <iostream>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	auto win = n / 2 + n % 2;
	int takahashi = 0;
	int aoki = 0;
	for (const auto &c: s)
		if (c == 'T') {
			if (++takahashi >= win) {
				std::cout << "T" << std::endl;
				return 0;
			}
		} else {
			if (++aoki >= win) {
				std::cout << "A" << std::endl;
				return 0;
			}
		}
	std::cout << (takahashi > aoki ? "T" : "A") << std::endl;

	return 0;
}
