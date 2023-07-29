#include <algorithm>
#include <iostream>
#include <vector>

static inline bool
test(std::vector<long> &x, std::vector<long> &y, int i, int j, int k)
{
	std::vector v{ i, j, k };

	std::sort(v.begin(), v.end(),
			[&x](int a, int b) { return x[a] > x[b]; });
	auto dx1 = x[v[1]] - x[v[0]];
	auto dy1 = y[v[1]] - y[v[0]];
	auto dx2 = x[v[2]] - x[v[0]];
	auto dy2 = y[v[2]] - y[v[0]];

	return dx1 * dy2 != dx2 * dy1;
}

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<long> x(n), y(n);
	for (int i = 0; i < n; i++)
		std::cin >> x[i] >> y[i];

	int cnt = 0;
	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++)
			for (int k = j+1; k < n; k++)
				if (test(x, y, i, j, k))
					cnt++;
	std::cout << cnt << std::endl;
}
