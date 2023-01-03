#include <iostream>
#include <set>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;
	s += "+";

	int cnt = 0;
	std::set<int> t;
	for (const auto &c: s)
		switch (c) {
		case '*':
			break;
		case '+':
			if (t.count('0') == 0)
				cnt++;
			t.clear();
			break;
		default:
			t.insert(c);
			break;
		}
	std::cout << cnt << std::endl;

	return 0;
}
