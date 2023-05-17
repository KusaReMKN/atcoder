#include <iostream>

int
main(void)
{
	int m, n;
	std::cin >> m >> n;

	int max = 0;
	for (int i = 0; i < m; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			int a;
			std::cin >> a;
			if (a)
				cnt++;
		}
		if (cnt > max)
			max = cnt;
	}
	std::cout << max << std::endl;

	return 0;
}
