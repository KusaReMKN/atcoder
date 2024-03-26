#include <iostream>
#include <vector>

int
main(void)
{
	long n;
	std::cin >> n;

	std::vector<long> a(n), b(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i] >> b[i];

	long cnt = 0;
	for (int i = n-1; i >= 0; i--)
		cnt += (b[i] - (a[i] + cnt) % b[i]) % b[i];
	std::cout << cnt << std::endl;

	return 0;
}
