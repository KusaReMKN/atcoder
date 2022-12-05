#include <iostream>

int
main(void)
{
	int h, w;

	std::cin >> h >> w;
	std::cout << h * (w-1) + (h-1) * w << std::endl;

	return 0;
}
