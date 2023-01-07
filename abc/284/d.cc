#include <cmath>
#include <iostream>

int
main(void)
{
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		long n;
		std::cin >> n;

		long p = 0, q = 0;
		for (long j = 2; j*j <= n; j++)
			if (n % j == 0) {
				if (n / j % j == 0)
					p = j, n /= p*p;
				else
					q = j, n /= q;
				break;
			}
		if (p)
			q = n;
		else
			p = std::sqrt((long double)n);
		std::cout << p << " " << q << std::endl;
	}

	return 0;
}
