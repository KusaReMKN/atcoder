#include <algorithm>
#include <iostream>
#include <map>

int
main(void)
{
	int l, r;
	std::cin >> l >> r;

	std::map<int, int> lm, rm;
	for (int i = 0; i < l; i++) {
		int s;
		std::cin >> s;
		lm[s]++;
	}
	for (int i = 0; i < r; i++) {
		int s;
		std::cin >> s;
		rm[s]++;
	}

	int sum = 0;
	for (const auto &e: lm)
		sum += std::min(rm[e.first], e.second);
	std::cout << sum << std::endl;

	return 0;
}
