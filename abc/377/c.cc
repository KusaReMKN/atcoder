#include <iostream>
#include <set>
#include <utility>

int
main(void)
{
	long n, m;
	std::cin >> n >> m;

	std::set<std::pair<long, long>> s;
	for (long i = 0; i < m; i++) {
		long a, b;
		std::cin >> a >> b;

		s.insert({ a, b });
		if (a+2 <= n && b+1 <= n)
			s.insert({ a+2, b+1 });
		if (a+1 <= n && b+2 <= n)
			s.insert({ a+1, b+2 });
		if (a-1 >= 1 && b+2 <= n)
			s.insert({ a-1, b+2 });
		if (a-2 >= 1 && b+1 <= n)
			s.insert({ a-2, b+1 });
		if (a-2 >= 1 && b-1 >= 1)
			s.insert({ a-2, b-1 });
		if (a-1 >= 1 && b-2 >= 1)
			s.insert({ a-1, b-2 });
		if (a+1 <= n && b-2 >= 1)
			s.insert({ a+1, b-2 });
		if (a+2 <= n && b-1 >= 1)
			s.insert({ a+2, b-1 });
	}
	std::cout << n*n - s.size() << std::endl;

	return 0;
}
