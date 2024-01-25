#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	std::string t;
	for (const auto &c: s) {
		t.push_back(c);
		if (std::equal(t.rbegin(), t.rbegin()+3, "CBA"))
			t.pop_back(), t.pop_back(), t.pop_back();
	}
	std::cout << t << std::endl;

	return 0;
}
