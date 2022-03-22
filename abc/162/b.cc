#include <bits/stdc++.h>

int main(void)
{
	int n;
	long res = 0;

	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0 || i % 5 == 0) continue;
		res += i;
	}
	std::cout << res << std::endl;

	return 0;
}
