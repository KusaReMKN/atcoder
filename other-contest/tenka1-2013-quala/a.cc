#include <iostream>

int
main(void)
{
	long n = 42L;

	while (n < 130000000L)
		n <<= 1;
	std::cout << n << std::endl;

	return 0;
}
