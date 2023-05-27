#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

static void
rotate(std::string &s)
{
	auto tmp = s[0];
	int i;
	for (i = 1; i < s.size(); i++)
		s[i-1] = s[i];
	s[i-1] = tmp;
}

static long
diff(std::string &s)
{
	int diff = 0;
	for (int i = 0; i < s.size()/2; i++)
		if (s[i] != s[s.size()-1-i])
			diff++;
	return diff;
}

int
main(void)
{
	int n;
	long a, b;
	std::cin >> n >> a >> b;

	std::string s;
	std::cin >> s;

	std::vector<long> v(n);
	for (int i = 0; i < n; i++) {
		v[i] = b * diff(s) + a * i;
		rotate(s);
	}
	std::cout << *std::min_element(v.begin(), v.end()) << std::endl;

	return 0;
}
