#include <bits/stdc++.h>

int main(void)
{
	int n, a, x, y;
	int sum = 0;

	std::cin >> n >> a >> x >> y;
	for (int i = 1; i <= n; i++)
		sum += a < i ? y : x;
	std::cout << sum;

	return 0;
}
