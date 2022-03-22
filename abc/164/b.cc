#include <bits/stdc++.h>

int main(void)
{
	int a, b, c, d;

	std::cin >> a >> b >> c >> d;
	for (;;) {
		c -= b;
		if (c <= 0) return std::cout << "Yes\n", 0;
		a -= d;
		if (a <= 0) return std::cout << "No\n", 0;
	}
	/* NOT REACHED */
	return -1;
}
