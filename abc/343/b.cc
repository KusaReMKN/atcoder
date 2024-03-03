#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	for (auto i = 0; i < n; i++) {
		for (auto i = 0; i < n; i++) {
			int a;
			std::cin >> a;
			if (a > 0)
				std::cout << i+1 << ' ';
		}
		std::cout << std::endl;
	}

	return 0;
}
