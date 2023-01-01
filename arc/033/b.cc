#include <iomanip>
#include <iostream>
#include <map>

int
main(void)
{
	int na, nb;
	std::cin >> na >> nb;

	std::map<int, bool> a, c, s;
	for (int i = 0; i < na; i++) {
		int t;
		std::cin >> t;
		a[t] = s[t] = true;
	}
	for (int i = 0; i < nb; i++) {
		int t;
		std::cin >> t;
		s[t] = t;
		if (a[t])
			c[t] = t;
	}
	std::cout << std::fixed << std::setprecision(9)
		<< (double)c.size() / s.size() << std::endl;

	return 0;
}
