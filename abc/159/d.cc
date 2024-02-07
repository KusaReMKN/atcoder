#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n), m(n, 0);
	for (auto &e: a) {
		std::cin >> e;
		m[e-1]++;
	}

	std::vector<long> s0(n, 0), s1(n, 0);
	long sum = 0;
	for (int i = 0; i < n; i++) {
		s0[i] = (long)m[i] * (m[i]-1) / 2;
		if (m[i] > 0)
			s1[i] = (long)(m[i]-1) * (m[i]-2) / 2;
		sum += s0[i];
	}

	for (const auto &e: a)
		std::cout << sum - (s0[e-1] - s1[e-1]) << std::endl;

	return 0;
}
