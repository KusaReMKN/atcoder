#include <algorithm>
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
	std::sort(a.begin(), a.end());

	for (auto itr = a.begin()+1; itr != a.end(); itr++) {
		auto prev = *(itr-1);
		if (prev != *itr-1) {
			std::cout << *itr-1 << std::endl;
			break;
		}
	}

	return 0;
}
