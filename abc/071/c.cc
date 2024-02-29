#include <iostream>
#include <map>

int
main(void)
{
	int n;
	std::cin >> n;

	std::map<int, int> m;
	for (auto i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		m[a]++;
	}

	long x = 0;
	long y = 0;
	for (auto itr = m.rbegin(); itr != m.rend(); itr++) {
		if (x <= 0 && itr->second >= 4) {
			x = y = itr->first;
			break;
		}
		if (itr->second >= 2)
			if (x <= 0) {
				x = itr->first;
			} else {
				y = itr->first;
				break;
			}
	}
	std::cout << x * y << std::endl;

	return 0;
}
