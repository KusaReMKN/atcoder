#include <iostream>
#include <set>
#include <string>

int
main(void)
{
	std::string a, b;
	std::cin >> a >> b;

	std::set<int> s;
	std::string t;
	for (int i = 0; i < 3; i++) {
		t = a;
		for (int j = i == 0; j <= 9; j++) {
			t[i] = '0' + j;
			s.insert(std::stoi(t) - std::stoi(b));
		}
	}
	for (int i = 0; i < 3; i++) {
		t = b;
		for (int j = i == 0; j <= 9; j++) {
			t[i] = '0' + j;
			s.insert(std::stoi(a) - std::stoi(t));
		}
	}
	std::cout << *s.rbegin() << std::endl;

	return 0;
}
