#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int q;
	std::cin >> q;

	std::vector<std::string> stack;
	for (int i = 0; i < q; i++) {
		std::string s;
		std::cin >> s;
		if (s == "READ") {
			std::cout << stack.back() << std::endl;
			stack.pop_back();
		} else {
			stack.push_back(s);
		}
	}

	return 0;
}
