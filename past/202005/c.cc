#include <iostream>

int
main(void)
{
	long a, r, n;
	std::cin >> a >> r >> n;

	if (n == 1 || r == 1) {
		std::cout << a << std::endl;
		return 0;
	}
	if (n > 30) {
large:
		std::cout << "large" << std::endl;
		return 0;
	} else {
		/* because 2^30 > 10^9 */
		for (int i = 1; i < n; i++)
			if ((a *= r) > 1000000000)
				goto large;
	}
	std::cout << a << std::endl;

	return 0;
}
