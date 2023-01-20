#include <iostream>

int
main(void)
{
	int n;
	int a, b, c, d, e, f;

	std::cin >> n;
	n += 100000 - 1;
	f = n % 10, n /= 10;
	e = n % 10, n /= 10;
	d = n % 10, n /= 10;
	c = n % 10, n /= 10;
	b = n % 10, n /= 10;
	a = n % 10, n /= 10;
	std::cout << a << a << b << c << d << d << e << f << e << std::endl;

	return 0;
}
