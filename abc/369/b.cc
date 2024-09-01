#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> l, r;
	for (int i = 0; i < n; i++) {
		int a;
		std::string s;
		std::cin >> a >> s;
		if (s == "L")
			l.push_back(a);
		else
			r.push_back(a);
	}

	int d = 0;
	for (int i = 1; i < l.size(); i++)
		d += std::abs(l[i-0] - l[i-1]);
	for (int i = 1; i < r.size(); i++)
		d += std::abs(r[i-0] - r[i-1]);
	std::cout << d << std::endl;

	return 0;
}
