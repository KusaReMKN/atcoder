#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n, m, a, b;
	std::cin >> n >> m >> a >> b;

	std::vector<int> v(n+2, 0);
	for (int i = 0; i < m; i++) {
		int l, r;
		std::cin >> l >> r;
		v[l]++;
		v[r+1]--;
	}

	int cnt = 0;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		cnt += v[i];
		sum += cnt ? a : std::max(a, b);
	}
	std::cout << sum << std::endl;

	return 0;
}
