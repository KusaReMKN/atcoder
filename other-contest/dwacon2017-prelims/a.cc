#include <algorithm>
#include <iostream>

int
main(void)
{
	int n, a, b;
	std::cin >> n >> a >> b;

	std::cout << std::max(0, a+b-n) << std::endl;

	return 0;
}
