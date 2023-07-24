#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n, d;
	std::cin >> n >> d;

	std::vector<std::string> s(n);
	for (auto &e: s)
		std::cin >> e;

	int max = 0;
	int run = 0;
	for (int i = 0; i < d; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++)
			if (s[j][i] == 'o')
				cnt++;
		if (cnt == n)
			run++;
		else
			run = 0;
		if (run > max)
			max = run;
	}
	std::cout << max << std::endl;

	return 0;
}
