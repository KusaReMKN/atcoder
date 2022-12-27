#include <iostream>

static inline long
ipow(int n, int p)
{
	long r = 1;
	for (int i = 0; i < p; i++)
		r *= n;
	return r;
}

int
main(void)
{
	long n;
	std::cin >> n;

	long t;
	for (int i = 1; (t = n-ipow(5, i)) > 0; i++) {
		int j = 0;
		while (t % 3 == 0)
			j++, t /= 3;
		std::clog << i << ":" << j << ":" << t << std::endl;
		if (t == 1 && j != 0) {
			std::cout << j << " " << i << std::endl;
			return 0;
		}
	}
	std::cout << -1 << std::endl;

	return 0;
}
