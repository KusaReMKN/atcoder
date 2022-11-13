#include <iostream>
#include <algorithm>

int
main(void)
{
	int n;
	int p[100];

	std::cin >> n;
	for (int i = 0; i < n; i++)
		std::cin >> p[i];
	std::prev_permutation(p, p+n);
	for (int i = 0; i < n; i++)
		std::cout << (i ? " " : "") << p[i];
	std::cout << std::endl;

	return 0;
}
