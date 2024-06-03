#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	int a = 1;
	for (const auto &c: s)
		switch (c) {
		case '+':
			a++;
			break;
		case '-':
			a--;
			break;
		}
	std::cout << a << std::endl;

	return 0;
}
