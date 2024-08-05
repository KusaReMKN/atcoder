#include <iostream>
#include <set>

static bool
isPrime(int n, std::set<int> &p)
{
	if (n == 2 || n == 3)
		goto yes;
	for (const auto &e: p) {
		if (n % e == 0)
			return false;
		if (e*e > n)
			break;
	}
yes:
	p.insert(n);
	return true;
}

int
main(void)
{
	int n;
	std::cin >> n;

	std::set<int> p;
	for (int i = 2; i <= n; i++)
		if (isPrime(i, p))
			std::cout << i << std::endl;

	return 0;
}
