#include <iostream>
#include <string>
#include <set>

int
main(void)
{
	int n;
	std::cin >> n;

	std::set<std::string> v;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		if (v.count(s) > 0)
			continue;
		v.insert(s);
		std::cout << i + 1 << std::endl;
	}

	return 0;
}
