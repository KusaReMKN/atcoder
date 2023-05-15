#include <iostream>
#include <map>
#include <string>

int
main(void)
{
	std::string s, t;
	std::cin >> s >> t;

	std::map<char, int> ms;
	for (const auto &c: s)
		ms[c]++;

	std::map<char, int> mt;
	for (const auto &c: t)
		mt[c]++;

	std::string atcoder("atcoder");
	for (const auto &c: atcoder)
		if (ms[c] < mt[c]) {
			ms['@'] -= mt[c] - ms[c];
			ms[c] = mt[c];
		} else {
			mt['@'] -= ms[c] - mt[c];
			mt[c] = ms[c];
		}
	if (ms['@'] < 0 || mt['@'] < 0) {
		std::cout << "No" << std::endl;
		return 0;
	}

	std::string ss;
	for (const auto &e: ms)
		for (int i = 0; i < e.second; i++)
			ss.push_back(e.first);
	std::clog << ss << std::endl;

	std::string tt;
	for (const auto &e: mt)
		for (int i = 0; i < e.second; i++)
			tt.push_back(e.first);
	std::clog << tt << std::endl;

	std::cout << (ss == tt ? "Yes" : "No") << std::endl;

	return 0;
}
