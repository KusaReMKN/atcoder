#include <iostream>

int main(void)
{
	int n;

	std::cin >> n;
	std::cout << (n & 1 ? "Black" : "White") << std::endl;

	return 0;
}
