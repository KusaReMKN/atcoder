#include <bits/stdc++.h>

int main(void)
{
	int n, l[100];
	int res = 0;

	std::cin >> n;
	for (int i = 0; i < n; i++) std::cin >> l[i];

	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			for (int k = j + 1; k < n; k++) {
				int a[3] = { l[i], l[j], l[k] };
				std::sort(a, a + 3);
				if (a[0] == a[1] || a[1] == a[2] || a[2] == a[0]) continue;
				if (a[0] + a[1] > a[2]) res++;
			}

	std::cout << res << std::endl;

	return 0;
}
