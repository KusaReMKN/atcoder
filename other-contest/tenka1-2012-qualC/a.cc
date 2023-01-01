#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> p;
	for (int i = 2; i < n; i++) {
		bool isPrime = 2;
		for (const auto e: p)
			if (i % e == 0) {
				isPrime = false;
				break;
			}
		if (isPrime) {
			std::clog << i << std::endl;
			p.push_back(i);
		}
	}
	std::cout << p.size() << std::endl;

	return 0;
}
