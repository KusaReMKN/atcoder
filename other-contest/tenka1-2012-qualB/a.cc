#include <iostream>

int
main(void)
{
	int a, b, c;

	std::cin >> a >> b >> c;
	for (int i = 1; i <= 127; i++)
		if (i % 3 == a && i % 5 == b && i % 7 == c)
			std::cout << i << std::endl;

	return 0;
}
