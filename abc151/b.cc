#include <bits/stdc++.h>

int main(void)
{
	int n, k, m, res;

	std::cin >> n >> k >> m;
	auto a = new std::vector<int>;
	for (int i = 0; i < n - 1; i++) {
		int temp;
		std::cin >> temp;
		a->push_back(temp);
	}
	res = m * n - std::accumulate(a->begin(), a->end(), 0);
	if (res > k)
		std::cout << -1 << std::endl;
	else if (res < 0)
		std::cout << 0 << std::endl;
	else
		std::cout << res << std::endl;

	return 0;
}
