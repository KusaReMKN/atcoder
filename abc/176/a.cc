#include <bits/stdc++.h>

int main(void)
{
	int n, x, t;

	std::cin >> n >> x >> t;
	std::cout << ((int)std::ceil((double)n / x) * t) <<std::endl;

	return 0;
}
