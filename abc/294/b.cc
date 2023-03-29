#include <iostream>

int
main(void)
{
	int h, w;
	std::cin >> h >> w;

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			int a;
			std::cin >> a;

			std::cout << (char)(a == 0 ? '.' : '@'+a);
		}
		std::cout << std::endl;
	}

	return 0;
}
