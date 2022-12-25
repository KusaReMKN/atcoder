#include <iostream>
#include <list>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	std::list<int> l{ 0 };
	auto itr = l.begin();
	for (int i = 0; i < n; i++) {
		if (s[i] == 'R')
			++itr;
		itr = l.insert(itr, i+1);
	}

	for (const auto &e: l)
		std::cout << (e == *l.begin() ? "" : " ") << e;
	std::cout << std::endl;

	return 0;
}
