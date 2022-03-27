#include<bits/stdc++.h>

int main(void)
{
	int n, a[1000], b[1000];

	std::cin >> n;
	for (int i = 0; i < n; i++) std::cin >> a[i] >> b[i];

	int min = 99999;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == i) {
				if (a[i] + b[j] < min)
					min = a[i] + b[j];
			} else {
				if (std::max({a[i], b[j]}) < min)
					min = std::max({a[i], b[j]});
			}
		}
	}

	std::cout << min << std::endl;

	return 0;
}
