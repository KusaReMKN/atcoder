#include <iostream>

int
main(void)
{
	int n;

	std::cin >> n;
	if (n != 1 && n % 2 && n % 3 && n % 5 || n == 2 || n == 3 || n == 5)
		goto prime;
	std::cout << "Not ";
prime:	std::cout << "Prime" << std::endl;

	return 0;
}
