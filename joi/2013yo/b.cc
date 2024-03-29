#include <iostream>
#include <map>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	int m = 3;
	std::vector<std::vector<int>> p(n, std::vector(m, 0));
	std::vector<std::map<int, int>> d(m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			std::cin >> p[i][j];
			d[j][p[i][j]]++;
		}

	for (int i = 0; i < n; i++) {
		int k = 0;
		for (int j = 0; j < m; j++)
			if (d[j][p[i][j]] == 1)
				k += p[i][j];
		std::cout << k << std::endl;
	}

	return 0;
}
