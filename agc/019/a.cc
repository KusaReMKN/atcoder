#include <algorithm>
#include <iostream>

int
main(void)
{
	unsigned long q, h, s, d;
	int n;
	unsigned long sum;

	std::cin >> q >> h >> s >> d;
	std::cin >> n;
	sum = 0;
	q <<= 3, h <<= 2, s <<= 1, d <<= 0;
	if (n >= 2)
		sum += std::min({ q, h, s, d }) * (n >> 1);
	n %= 2;
	q >>= 1, h >>= 1, s >>= 1;
	if (n != 0)
		sum += std::min({ q, h, s });
	std::cout << sum << std::endl;

	return 0;
}
