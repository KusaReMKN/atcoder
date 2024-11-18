#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

static void
mkcalc(std::vector<std::string> &t, std::vector<std::vector<int>> const &v,
		std::vector<std::string> const &s, int n)
{
	t.push_back(s[n]);
	if (v[n].size() == 0)
		return;
	mkcalc(t, v, s, v[n][0]);
	mkcalc(t, v, s, v[n][1]);
}

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> p(n);
	for (int i = 1; i < n; i++)
		std::cin >> p[i];

	std::vector<std::string> s(n);
	for (int i = 0; i < n; i++)
		std::cin >> s[i];

	std::vector<std::vector<int>> v(n);
	for (int i = 0; i < n; i++)
		if (p[i] > 0)
			v[p[i]-1].push_back(i);

	std::vector<std::string> t;
	mkcalc(t, v, s, 0);

	std::vector<long> st;
	for (auto itr = t.rbegin(); itr != t.rend(); itr++)
		if (*itr == "x") {
			long a = st.back();
			st.pop_back();
			long b = st.back();
			st.pop_back();
			a *= b;
			a %= 998244353L;
			st.push_back(a);
		} else if (*itr == "+") {
			long a = st.back();
			st.pop_back();
			long b = st.back();
			st.pop_back();
			a += b;
			a %= 998244353L;
			st.push_back(a);
		} else {
			st.push_back(std::stoi(*itr));
		}
	std::cout << st[0] << std::endl;

	return 0;
}
