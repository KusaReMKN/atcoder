#include <deque>
#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	std::deque<int> a(1 << n);
	for (auto &e: a)
		std::cin >> e;

	do {
		auto x = a[0];
		a.pop_front();
		auto y = a[0];
		a.pop_front();
		if (x > y)
			a.push_back(x-y);
		if (x < y)
			a.push_back(y-x);
		if (x == y)
			a.push_back(x);
	} while (a.size() != 1);
	std::cout << a[0] << std::endl;

	return 0;
}
