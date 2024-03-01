#include <deque>
#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	std::deque<char> t;
	bool tail = true;

	for (const auto &c: s)
		if (c == 'R')
			tail = !tail;
		else
			if (tail)
				if (!t.empty() && c == t.back())
					t.pop_back();
				else
					t.push_back(c);
			else
				if (!t.empty() && c == t.front())
					t.pop_front();
				else
					t.push_front(c);

	if (tail)
		for (auto itr = t.begin(); itr != t.end(); itr++)
			std::cout << *itr;
	else
		for (auto itr = t.rbegin(); itr != t.rend(); itr++)
			std::cout << *itr;
	std::cout << std::endl;

	return 0;
}
