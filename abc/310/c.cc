#include <algorithm>
#include <iostream>
#include <set>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::set<std::string> ss;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		std::string t(s);
		std::reverse(t.begin(), t.end());
		ss.insert(s > t ? s : t);
	}

	std::cout << ss.size() << std::endl;

	return 0;
}
