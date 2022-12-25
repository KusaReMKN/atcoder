#include <algorithm>
#include <iostream>

int
main(void)
{
	int x, y, k;

	std::cin >> x >> y >> k;
	x += std::min(y, k);
	k -= std::min(y, k);
	x -= k;
	std::cout << x << std::endl;

	return 0;
}
