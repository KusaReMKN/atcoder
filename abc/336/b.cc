#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	int i;
	for (i = 0; (n & 1) == 0; i++)
		n >>= 1;
	std::cout << i << std::endl;

	return 0;
}
