#include <algorithm>
#include <iostream>
#include <vector>

struct u {
	int i, a, b;
};

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<u> x(n);
	for (int i = 0; i < n; i++)
		x[i].i = i+1, std::cin >> x[i].a;
	for (int i = 0; i < n; i++)
		std::cin >> x[i].b;

	std::stable_sort(x.rbegin(), x.rend(), [](auto a, auto b) {
			return a.a < b.a;
	});
	std::stable_sort(x.rbegin(), x.rend(), [](auto a, auto b) {
			return a.a+a.b < b.a+b.b;
	});

	for (const auto &e: x)
		std::cout << e.i << " ";
	std::cout << std::endl;

	return 0;
}
