#include <cstdlib>
#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		auto x = i;
		auto y = n - i;

		auto cntx = 0;
		for (int i = 1; i*i <= x; i++) {
			auto res = std::div(x, i);
			if (res.rem == 0)
				cntx += res.quot == i ? 1 : 2;
		}

		auto cnty = 0;
		for (int i = 1; i*i <= y; i++) {
			auto res = std::div(y, i);
			if (res.rem == 0)
				cnty += res.quot == i ? 1 : 2;
		}

		cnt += cntx * cnty;
	}
	std::cout << cnt << std::endl;

	return 0;
}
