#include <iostream>
#include <set>

int
main(void)
{
	int a, b, c;
	std::cin >> a >> b >> c;

	std::multiset<int> s;
	s.insert(a);
	s.insert(b);
	s.insert(c);

	std::cout << (s.count(1) > s.count(2) ? 1 : 2) << std::endl;

	return 0;
}
