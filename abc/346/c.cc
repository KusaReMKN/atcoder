#include <iostream>
#include <numeric>
#include <set>

int
main(void)
{
	long n, k;
	std::cin >> n >> k;

	std::set<long> s;
	for (long i = 0; i < n; i++) {
		long a;
		std::cin >> a;
		if (a <= k)
			s.insert(a);
	}

	long sum = k * (k+1) >> 1;
	sum -= std::reduce(s.begin(), s.end());
	std::cout << sum << std::endl;

	return 0;
}
