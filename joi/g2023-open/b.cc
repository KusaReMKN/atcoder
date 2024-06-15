#include <cstdlib>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	while (a.size() > 1) {
		std::vector<int> b(a.size()-1);
		for (int i = 1; i < a.size(); i++)
			b[i-1] = std::abs(a[i-0] - a[i-1]);
		a = b;
	}

	std::cout << a[0] << std::endl;

	return 0;
}
