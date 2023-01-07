#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::string> v(n);
	for (auto &s: v)
		std::cin >> s;
	for (auto i = v.rbegin(); i != v.rend(); i++)
		std::cout << *i << std::endl;

	return 0;
}
