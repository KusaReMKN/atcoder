#include <iostream>
#include <vector>

int
main(void)
{
	long n, t;
	std::cin >> n >> t;

	std::vector<long> a(n);
	long sum = 0;
	for (auto &e: a) {
		std::cin >> e;
		sum += e;
	}

	if (t > sum)
		t %= sum;
	for (int i = 0; i < n; i++) {
		t -= a[i];
		if (t < 0) {
			std::cout << i+1 << " " << a[i]+t << std::endl;
			break;
		}
	}

	return 0;
}
