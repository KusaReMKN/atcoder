#include <algorithm>
#include <iostream>

int
main(void)
{
	int a, b, c;

	std::cin >> a >> b >> c;
	std::cout << b + std::min(a+b+1, c) << std::endl;

	return 0;
}
