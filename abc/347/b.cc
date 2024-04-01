#include <iostream>
#include <set>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	std::set<std::string> v;
	for (int i = 0; i < s.size(); i++)
		for (int j = 0; j <= s.size()-i; j++)
			v.insert(s.substr(i, j));
	v.erase("");
	std::cout << v.size() << std::endl;

	return 0;
}
