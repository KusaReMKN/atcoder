#include <deque>
#include <iostream>

int
main(void)
{
	int n, k;
	std::deque<int> d;

	std::cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		d.push_back(a);
	}
	for (int i = 0; i < k; i++) {
		d.pop_front();
		d.push_back(0);
	}
	for (int i = 0; i < n; i++)
		std::cout << (i ? " " : "") << d[i];
	std::cout << std::endl;

	return 0;
}
