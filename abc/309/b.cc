#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::string> a(n);
	for (auto &e: a)
		std::cin >> e;

	auto b = a;


	auto t0 = a[0][n-1];
	for (int i = 1; i < n; i++)
		b[0][i] = a[0][i-1];
	auto t = a[n-1][n-1];
	for (int i = 1; i < n; i++)
		b[i][n-1] = a[i-1][n-1];
	b[1][n-1] = t0;
	t0 = t;
	t = a[n-1][0];
	for (int i = n-1; i > 0; i--)
		b[n-1][i-1] = a[n-1][i];
	b[n-1][n-2] = t0;
	t0 = t;
	t = b[0][0];
	for (int i = n-1; i > 0; i--)
		b[i-1][0] = a[i][0];
	b[n-2][0] = t0;
	b[0][1] = t;

	for (const auto &e: b)
		std::cout << e << std::endl;

	return 0;
}
