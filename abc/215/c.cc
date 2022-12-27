#include <algorithm>
#include <iostream>
#include <set>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	int k;
	std::cin >> k;

	std::vector<int> o(s.size());
	for (int i = 0; i < s.size(); i++)
		o[i] = i;

	std::set<std::string> ss;
	do {
		std::string t;
		for (const auto &i: o)
			t.push_back(s[i]);
		ss.insert(t);
		std::clog << t << std::endl;
	} while (std::next_permutation(o.begin(), o.end()));

	auto itr = ss.begin();
	for (int i = 1; i < k; i++)
		itr++;
	std::cout << *itr << std::endl;

	return 0;
}
