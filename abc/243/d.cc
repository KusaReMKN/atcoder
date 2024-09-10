#include <iostream>
#include <string>

int
main(void)
{
	unsigned long n, x;
	std::cin >> n >> x;

	std::string s;
	std::cin >> s;

	std::string q;
	for (const auto &c: s) {
		const auto p = q.empty() ? '*' : q.back();
		if (c == 'U' && (p == 'L' || p == 'R'))
			q.pop_back();
		else
			q.push_back(c);
	}

	for (const auto &c: q)
		switch (c) {
		case 'U':
			x /= 2;
			break;
		case 'L':
			x = x * 2 + 0;
			break;
		case 'R':
			x = x * 2 + 1;
			break;
		}
	std::cout << x << std::endl;

	return 0;
}
