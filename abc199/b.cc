#include <bits/stdc++.h>

int main(void)
{
	int n, a, b;
	int maxa = 0, minb = 99999;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a;
		if (a > maxa)
			maxa = a;
	}
	for (int i = 0; i < n; i++) {
		std::cin >> b;
		if (b < minb)
			minb = b;
	}
	if (minb < maxa)
		std::cout << 0 << std::endl;
	else
		std::cout << (minb - maxa + 1) << std::endl;

	return 0;
}
