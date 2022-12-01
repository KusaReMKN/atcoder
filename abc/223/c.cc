#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	long double tt = 0.0;
	std::vector<std::pair<int, int>> v(n);
	for (auto &e: v) {
		std::cin >> e.first >> e.second;
		tt += (long double)e.first / e.second;
	}
	tt /= 2.0;
	long double tl = 0;
	for (const auto &e: v)
		if (tt > (long double)e.first / e.second) {
			tt -= (long double)e.first / e.second;
			tl += e.first;
		} else {
			std::cout << std::fixed << std::setprecision(16)
				<< (tl + e.second * tt) << std::endl;
			break;
		}

	return 0;
}
