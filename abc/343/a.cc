#include <iostream>

int
main(void)
{
	int a, b;
	std::cin >> a >> b;

	for (auto i = 0; i <= 9; i++)
		if (i != a+b) {
			std::cout << i << std::endl;
			return 0;
		}

	return -1;
}
