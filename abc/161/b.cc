#include <bits/stdc++.h>

int main(void)
{
	int n, m, a[100] = { 0 };

	std::cin >> n >> m;
	for (int i = 0; i < n; i++) std::cin >> a[i];
	auto sum = std::accumulate(a, a + n, 0);
	auto min = sum / (4.0 * m);
	std::sort(a, a + n, std::greater<int>());
	for (int i = 0; i < m; i++) {
		if (a[i] < min) return std::cout << "No\n", 0;
	}
	return std::cout << "Yes\n", 0;
}
