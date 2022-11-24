#include <iostream>

int
main(void)
{
	int a, b, c;

	std::cin >> a >> b >> c;
	std::cout << (a <= c && c < b) << std::endl;

	return 0;
}
