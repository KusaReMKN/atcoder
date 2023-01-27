#include <iostream>
#include <vector>

int
main(void)
{
	int n, q;
	std::cin >> n >> q;

	std::vector<int> a(n+1, 0);
	for (int i = 1; i <= n; i++) {
		std::cin >> a[i];
		a[i] += a[i-1];
	}

	for (int i = 0; i < q; i++) {
		int l, r;
		std::cin >> l >> r;
		std::cout << a[r]-a[l-1] << std::endl;
	}

	return 0;
}
