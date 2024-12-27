#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector<int> c(n);
	for (auto &e: c)
		std::cin >> e;

	std::map<int, int> m;
	for (int i = 0; i < k; i++)
		m[c[i]]++;

	std::vector<int> v(n-k);
	for (int i = k; i < n; i++) {
		v[i-k] = m.size();
		m[c[i]]++;
		if (--m[c[i-k]] == 0)
			m.erase(c[i-k]);
	}
	v.push_back(m.size());
	std::cout << *std::max_element(v.begin(), v.end()) << std::endl;

	return 0;
}
