#include <iostream>
#include <string>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::string s, t;
	std::cin >> s >> t;

	auto r = 0;
	if (t.find(s) != 0)
		r |= 2;
	if (t.find(s, m-n) != m-n)
		r |= 1;
	std::cout << r << std::endl;

	return 0;
}
