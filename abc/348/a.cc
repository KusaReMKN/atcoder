#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
		std::cout << (i % 3 == 0 ? "x" : "o");
	std::cout << std::endl;

	return 0;
}
