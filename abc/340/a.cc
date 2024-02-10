#include <iostream>

int
main(void)
{
	int a, b, d;
	std::cin >> a >> b >> d;

	for (int i = a; i <= b; i += d)
		std::cout << i << " ";
	std::cout << std::endl;

	return 0;
}
