#include <iostream>
#include <map>

int
main(void)
{
	int n;
	std::cin >> n;

	std::map<int, int> d;
	for (int i = 0; i < n; i++) {
		int tmp;
		std::cin >> tmp;
		d[tmp]++;
	}

	int m;
	std::cin >> m;

	for (int i = 0; i < m; i++) {
		int tmp;
		std::cin >> tmp;
		if (--d[tmp] < 0) {
			std::cout << "NO" << std::endl;
			return 0;
		}
	}
	std::cout << "YES" << std::endl;

	return 0;
}
