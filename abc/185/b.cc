#include <bits/stdc++.h>

int main(void)
{
	int n, m, t, a, b;
	int now = 0, maxn;

	std::cin >> n >> m >> t;
	maxn = n;
	for (int i = 0; i < m && n > 0; i++) {
		std::cin >> a >> b;
		n -= a - now;
		if (n <= 0) break;
		n += b - a;
		if (n > maxn) n = maxn;
		now = b;
	}
	n -= t - now;
	if (n <= 0) return std::cout << "No\n", 0;
	return std::cout << "Yes\n", 0;
}
