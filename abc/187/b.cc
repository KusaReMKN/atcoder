#include<bits/stdc++.h>

int main(void)
{
	int n, x[1000], y[1000];
	int res = 0;

	std::cin >> n;
	for (int i = 0; i < n; i++) std::cin >> x[i] >> y[i];

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (x[i] == x[j]) continue;
			double dx = x[i] - x[j], dy = y[i] - y[j];
			double a = dy / dx;
			if (-1 <= a && a <= 1) res++;
		}
	}

	std::cout << res << std::endl;

	return 0;
}
