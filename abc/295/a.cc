#include <iostream>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string tab[] = {
		"and", "not", "that", "the", "you"
	};
	for (int i = 0; i < n; i++) {
		std::string w;
		std::cin >> w;

		for (const auto &e: tab)
			if (e == w) {
				std::cout << "Yes" << std::endl;
				return 0;
			}
	}
	std::cout << "No" << std::endl;

	return 0;
}
