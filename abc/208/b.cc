#include <bits/stdc++.h>

int fact(int x)
{
	if (x == 1)
		return 1;
	else
		return x * fact(x-1);
}

int main(void)
{
	int a[10];

	for (int i = 0; i < 10; i++)
		a[i] = fact(i+1);

	int p;
	std::cin >> p;

	int res = 0;
	for (int i = 9; i >= 0; i--) {
		if (p >= a[i]) {
			res++;
			p -= a[i];
			i++;
		}
	}

	std::cout << res << std::endl;

	return 0;
}
