#include <iostream>

int
main(void)
{
	long n;
	std::cin >> n;

	bool isPrime = true;
	for (long i = 2; i * i <= n; i++)
		if (n % i == 0) {
			isPrime = false;
			break;
		}
	std::cout << (isPrime ? "YES" : "NO") << std::endl;

	return 0;
}
