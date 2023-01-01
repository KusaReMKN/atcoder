#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	auto sum = n * (n+1L) / 2L;
	std::clog << sum << std::endl;

	bool isPrime = sum != 1;
	for (int i = 2; i*i <= sum; i++)
		if (sum % i == 0)
			isPrime = false;
	std::cout << (isPrime ? "WANWAN" : "BOWWOW") << std::endl;

	return 0;
}
