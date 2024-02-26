#include <algorithm>
#include <iostream>
#include <string>

unsigned long
f(unsigned long a, unsigned long b)
{
	return std::max(std::to_string(a).size(), std::to_string(b).size());
}

int
main(void)
{
	unsigned long n;
	std::cin >> n;

	unsigned long min = -1;
	for (unsigned long i = 1; i*i <= n; i++)
		if (n % i == 0)
			min = std::min(min, f(i, n/i));
	std::cout << min << std::endl;

	return 0;
}
