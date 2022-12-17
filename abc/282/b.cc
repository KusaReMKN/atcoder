#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<std::string> ss(n);
	for (auto &s: ss)
		std::cin >> s;

	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++) {
			for (int k = 0; k < m; k++)
				if (ss[i][k] == 'x' && ss[j][k] == 'x')
					goto next;
			sum++;
next:			(void)0;
		}
	std::cout << sum << std::endl;

	return 0;
}
