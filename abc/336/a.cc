#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	std::cout << "L";
	for (int i = 0; i < n; i++)
		std::cout << "o";
	std::cout << "ng" << std::endl;

	return 0;
}
