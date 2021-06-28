#include <bits/stdc++.h>

int main()
{
	std::vector<int> a, s;
	int n;

	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		int tmp;
		std::cin >> tmp;
		a.push_back(tmp);
		s.push_back(i);
	}
	std::sort(a.begin(), a.end());

	std::cout
		<< (std::equal(a.begin(), a.end(), s.begin()) ? "Yes" : "No")
		<< std::endl;

	return 0;
}
