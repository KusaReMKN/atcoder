#include <iostream>
#include <set>

int
main(void)
{
	long n;
	std::cin >> n;

	std::set<long> s;
	for (long i = 2; i*i <= n; i++)
		for (long m = i*i; m <= n; m *= i)
			s.insert(m);
	std::cout << n - s.size() << std::endl;

	return 0;
}
