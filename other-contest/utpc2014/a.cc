#include <iostream>
#include <sstream>
#include <string>

int
main(void)
{
	std::string s;
	std::stringstream ss;

	int n = 0;
	while (std::cin >> s) {
		if (s == "not") {
			n++;
		} else {
			for (n &= 1; n > 0; n--)
				ss << "not ";
			ss << s << " ";
		}
	}
	for (n; n > 0; n--)
		ss << "not ";

	auto res = ss.str();
	res.pop_back();
	std::cout << res << std::endl;

	return 0;
}
