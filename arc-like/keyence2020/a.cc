#include <algorithm>
#include <iostream>

int
main(void)
{
	int h, w, n;

	std::cin >> h >> w >> n;
	std::cout << (n / std::max(h, w) + !!(n % std::max(h, w)))
		<< std::endl;

	return 0;
}
