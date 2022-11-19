#include <algorithm>
#include <iostream>

int
main(void)
{
	int n, t, t0, t1;
	long sum;

	std::cin >> n >> t;
	std::cin >> t0;
	sum = 0;
	for (int i = 1; i < n; i++) {
		std::cin >> t1;
		sum += std::min(t1-t0, t);
		t0 = t1;
	}
	sum += t;
	std::cout << sum << std::endl;

	return 0;
}
