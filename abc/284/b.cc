#include <iostream>

int
main(void)
{
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		std::cin >> n;

		int cnt = 0;
		for (int j = 0; j < n; j++) {
			int a;
			std::cin >> a;
			if (a % 2 == 1)
				cnt++;
		}
		std::cout << cnt << std::endl;
	}

	return 0;
}
