#include <algorithm>
#include <iostream>

int
main(void)
{
	int n, a, b, c, d;
	std::cin >> n >> a >> b >> c >> d;

	int x = (n / a + !!(n % a)) * b;
	int y = (n / c + !!(n % c)) * d;
	std::cout << std::min(x, y) << std::endl;

	return 0;
}
