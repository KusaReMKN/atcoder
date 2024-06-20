#include <iostream>
#include <map>

int
main(void)
{
	int n;
	std::cin >> n;

	std::map<int, int> m;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		m[a]++;
	}

	int i, c;
	std::tie(i, c) = *m.begin();
	for (const auto &e: m)
		if (e.second > c)
			std::tie(i, c) = e;
	std::cout << i << ' ' << c << std::endl;

	return 0;
}
