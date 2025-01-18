#include <iostream>
#include <map>
#include <string>
#include <vector>

int
main(void)
{
	std::string s;
	std::cin >> s;

	int n;
	std::cin >> n;

	std::map<char, int> m;
	for (int i = 0; i < 10; i++)
		m['0'+i] = i;
	for (int i = 0; i < n; i++) {
		char c;
		int v;
		std::cin >> c >> v;
		m[c] = v;
	}

	int sum = m[s[0]];
	for (int i = 1; i < s.size(); i += 2)
		switch (s[i+0]) {
		case '+':
			sum += m[s[i+1]];
			break;
		case '-':
			sum -= m[s[i+1]];
			break;
		}
	std::cout << sum << std::endl;

	return 0;
}
