#include <cstdlib>
#include <iostream>
#include <vector>

#define SIGN(x)	((x) / std::abs(x))

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	auto last = a[0];
	for (int i = 1; i < n; i++) {
		for (int j = last; j != a[i]; j += SIGN(a[i] - last))
			std::cout << j << " ";
		last = a[i];
	}
	std::cout << a[n-1] << std::endl;

	return 0;
}
