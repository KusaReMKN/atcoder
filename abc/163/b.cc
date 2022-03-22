#include <bits/stdc++.h>

int main(void)
{
	int n, m;
	int sum = 0;

	std::cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int tmp;
		std::cin >> tmp;
		sum += tmp;
		if (sum > n) break;
	}
	if (sum > n) std::cout << "-1\n";
	else std::cout << (n - sum) << std::endl;

	return 0;
}
