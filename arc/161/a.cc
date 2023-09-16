#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;
	std::sort(a.begin(), a.end());

	std::vector<int> b(n);
	for (int i = 0; i < n/2+1; i++)
		b[2*i] = a[i];
	for (int i = 0; i < n/2; i++)
		b[2*i+1] = a[n/2+i+1];

	bool ok = true;
	for (int i = 1; i < n; i += 2)
		if (b[i-1] >= b[i] || b[i] <= b[i+1]) {
			ok = false;
			break;
		}

	std::cout << (ok ? "Yes" : "No") << std::endl;

	return 0;
}
