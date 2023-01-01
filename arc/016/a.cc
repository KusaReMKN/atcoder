#include <iostream>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	int r = 0;
	while (++r < n && r == m);
	std::cout << r << std::endl;

	return 0;
}
