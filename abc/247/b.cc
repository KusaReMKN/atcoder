#include <iostream>
#include <map>

int
main(void)
{
	int n;
	std::string s[100], t[100];
	std::map<std::string, int> nick;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> s[i] >> t[i];
		nick[s[i]]++;
		nick[t[i]]++;
	}

	int nameable = 0;
	for (int i = 0; i < n; i++)
		if (nick[s[i]] == 1 || nick[t[i]] == 1
				|| s[i] == t[i] && nick[s[i]] == 2)
			nameable++;

	if (nameable == n)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;

	return 0;
}
