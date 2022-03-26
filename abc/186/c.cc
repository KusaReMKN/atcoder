#include <bits/stdc++.h>

int main(void)
{
	int n, res = 0;

	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		char o[16], d[16];
		std::sprintf(o, "%o", i);
		std::sprintf(d, "%d", i);
		if (!std::strchr(o, '7') && !std::strchr(d, '7')) res++;
	}

	std::cout << res << std::endl;

	return 0;
}
