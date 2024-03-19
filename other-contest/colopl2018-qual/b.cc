#include <algorithm>
#include <iostream>
#include <string>

int
main(void)
{
	int n, x;
	std::cin >> n >> x;

	std::string s;
	std::cin >> s;

	long cnt = 0;
	for (const auto &c: s) {
		int t;
		std::cin >> t;

		if (c == '0')
			cnt += t;
		else
			cnt += std::min(t, x);
	}
	std::cout << cnt << std::endl;

	return 0;
}
