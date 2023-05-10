#include <iostream>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	auto max = n / 2 + n % 2;
	std::cout << (max < k ? "NO" : "YES") << std::endl;

	return 0;
}
