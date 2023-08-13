#include <iostream>

static inline int
f(int y, int m, int d)
{
	return 365*y + y/4 - y/100 + y/400 + 306*(m+1)/10 + d - 429;
}

int
main(void)
{
	int y, m, d;
	std::cin >> y >> m >> d;

	if (m == 1 || m == 2)
		m += 12, y--;
	std::cout << f(2014, 5, 17) - f(y, m, d) << std::endl;

	return 0;
}
