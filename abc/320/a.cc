#include <iostream>

static int
ipow(int a, int b)
{
	if (b < 1)
		return 1;
	else
		return a * ipow(a, b-1);
}

int
main(void)
{
	int a, b;
	std::cin >> a >> b;

	std::cout << ipow(a, b) + ipow(b, a) << std::endl;

	return 0;
}
