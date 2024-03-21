#include <iostream>

int
main(void)
{
	int a, b;
	std::cin >> a >> b;

	a--;
	int l = a/4 - a/100 + a/400;
	int r = b/4 - b/100 + b/400;
	std::cout << r-l << std::endl;

	return 0;
}
