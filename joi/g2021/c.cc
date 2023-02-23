#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n+1, 0), t(n+1, 0);
	for (int i = 1; i <= n; i++) {
		std::cin >> a[i];
		t[i] = t[i-1] + a[i];
	}

	auto min = n;
	for (int i = 0; i <= n; i++) {
		auto sum = (i - t[i]) + (t[n] - t[i]);
		if (sum < min)
			min = sum;
	}
	std::cout << min << std::endl;

	return 0;
}
