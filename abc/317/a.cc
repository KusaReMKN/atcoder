#include <iostream>

int
main(void)
{
	int n, h, x;
	std::cin >> n >> h >> x;

	for (int i = 0; i < n; i++) {
		int p;
		std::cin >> p;
		if (h + p >= x) {
			std::cout << i+1 << std::endl;
			break;
		}
	}

	return 0;
}
