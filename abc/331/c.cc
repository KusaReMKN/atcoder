#include <iostream>
#include <map>
#include <vector>

int
main(void)
{
	long n;
	std::cin >> n;

	std::vector<long> a(n);
	std::map<long, long> m;
	long sum = 0;
	for (long i = 0; i < n; i++) {
		std::cin >> a[i];
		m[a[i]]++;
		sum += a[i];
	}

	m.begin()->second *= m.begin()->first;
	for (auto itr = std::next(m.begin()); itr != m.end(); itr++) {
		itr->second *= itr->first;
		if (itr != m.begin())
			itr->second += std::prev(itr)->second;
	}

	for (const auto &e: a)
		std::cout << sum - m[e] << ' ';
	std::cout << std::endl;

	return 0;
}
