#include <iostream>

static unsigned long
combination(unsigned long n, unsigned long r)
{
	return r > 0 ? (n-r+1) * combination(n, r-1) / r : 1UL;
}

int
main(void)
{
	unsigned long l;
	std::cin >> l;

	std::cout << combination(l-1, 11) << std::endl;

	return 0;
}
