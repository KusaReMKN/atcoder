#include <iostream>
#include <vector>

int
main(void)
{
	long n;
	std::cin >> n;

	std::vector<long> a(n);
	a[0] = a[1] = 1;
	for (long i = 2; i < n; i++)
		a[i] = (a[i-1] + a[i-2]) % 1000000007;
	std::cout << a[n-1] << std::endl;

	return 0;
}
