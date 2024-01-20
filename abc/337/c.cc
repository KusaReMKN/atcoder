#include <iostream>
#include <map>

int
main(void)
{
	int n;
	std::cin >> n;

	std::map<int, int> m;
	for (int i = 1; i <= n; i++) {
		int a;
		std::cin >> a;
		m[a] = i;
	}
	std::cout << m[-1];
	int k = m[-1];
	for (int i = 1; i < n; i++) {
		std::cout << " " << m[k];
		k = m[k];
	}
	std::cout << std::endl;

	return 0;
}
