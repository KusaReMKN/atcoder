#include <iostream>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> s(m, 0);
	for (auto &e: s) {
		int c;
		std::cin >> c;
		for (int i = 0; i < c; i++) {
			int a;
			std::cin >> a;
			e |= 1 << --a;
		}
	}

	int cnt = 0;
	for (int i = 0; i < 1 << m; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++)
			if (i & 1 << j)
				sum |= s[j];
		if (sum == (1 << n) - 1)
			cnt++;
	}
	std::cout << cnt << std::endl;

	return 0;
}
