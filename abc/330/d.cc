#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::string> s(n);
	for (auto &r: s)
		std::cin >> r;

	std::vector<int> x(n, 0), y(n, 0);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (s[i][j] == 'o')
				x[j]++, y[i]++;

	long sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (s[i][j] == 'o')
				sum += (long)(x[j]-1) * (y[i]-1);
	std::cout << sum << std::endl;

	return 0;
}
