#include <iostream>
#include <map>
#include <vector>

int
main(void)
{
	long n, t;
	std::cin >> n >> t;

	std::map<long, long> m;
	std::vector<long> v(n, 0);
	m[0] = n;
	for (long i = 0; i < t; i++) {
		long a, b;
		std::cin >> a >> b;

		if (--m[v[a-1]] == 0)
			m.erase(v[a-1]);
		v[a-1] += b;
		m[v[a-1]]++;
		std::cout << m.size() << std::endl;
	}

	return 0;
}
