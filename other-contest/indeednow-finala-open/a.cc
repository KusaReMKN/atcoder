#include <algorithm>
#include <cstdlib>
#include <deque>
#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	std::deque<int> a(n);
	for (auto &e: a)
		std::cin >> e;
	std::sort(a.begin(), a.end());

	std::deque<int> v;
	while (a.size() > 0) {
		v.push_back(a[0] + a.back());
		a.pop_back();
		a.pop_front();
	}

	int max= -1;
	for (int i = 0; i < v.size(); i++)
		for (int j = i+1; j < v.size(); j++)
			max = std::max(max, std::abs(v[i]-v[j]));
	std::cout << max << std::endl;

	return 0;
}
