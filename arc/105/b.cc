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

	while (1) {
		auto min = m.begin()->first;
		auto max = m.rbegin()->first;
		if (min == max)
			break;
		m[max-min] += m[max];
		m.erase(max);
	}

	std::cout << m.begin()->first << std::endl;

	return 0;
}
