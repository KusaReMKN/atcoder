#include <iostream>
#include <numeric>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	int ind = 0;
	int max = a[ind];
	for (int i = 0; i < n; i++)
		if (a[i] > max)
			ind = i, max = a[ind];

	std::cout << std::reduce(a.begin(), a.begin()+ind) << std::endl;
	std::cout << std::reduce(a.begin()+ind+1, a.end()) << std::endl;

	return 0;
}
