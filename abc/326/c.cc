#include <iostream>
#include <map>

int
main(void)
{
	long n, m;
	std::cin >> n >> m;

	std::map<long, long> v;
	for (long i = 0; i < n; i++) {
		long a;
		std::cin >> a;
		v[a]++;
		v[a+m]--;
	}

	long max = 0;
	long cnt = 0;
	for (const auto &e: v) {
		cnt += e.second;
		if (cnt > max)
			max = cnt;
	}
	std::cout << max << std::endl;

	return 0;
}
