#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	std::vector<std::string> v;
	std::string s;

	while (std::cin >> s)
		v.push_back(s);
	std::sort(v.begin(), v.end());
	std::cout << v[6] << std::endl;

	return 0;
}
