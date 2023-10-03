#include <iostream>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> d(n+1, -1);
	d[0] = 0;
	for (int i = 0; i < m; i++) {
		int a;
		std::cin >> a;
		for (int j = 0; d[a-j] < 0; j++)
			d[a-j] = j;
	}

	for (int i = 1; i <= n; i++)
		std::cout << d[i] << std::endl;

	return 0;
}
