#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int d;
	std::cin >> d;

	std::vector<long> a(d);
	std::cin >> a[0];
	for (int i = 1; i < d; i++) {
		std::cin >> a[i];
		a[i] += a[i-1];
	}

	unsigned long min = -1;
	for (int i = 0; i < d; i++) {
		int b;
		std::cin >> b;
		if (a[i] >= b)
			min = std::min(min, (unsigned long)b);
	}
	std::cout << (int)min << std::endl;

	return 0;
}
