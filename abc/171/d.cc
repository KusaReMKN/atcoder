#include <iostream>
#include <map>

int
main(void)
{
	int n;
	std::cin >> n;

	long sum = 0;
	std::map<int, int> m;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		sum += a;
		m[a]++;
	}

	int q;
	std::cin >> q;
	for (int i = 0; i < q; i++) {
		int b, c;
		std::cin >> b >> c;

		auto d = (long)m[b] * (c - b);
		sum += d;
		m[c] += m[b];
		m[b] = 0;
		std::cout << sum << std::endl;
	}

	return 0;
}
