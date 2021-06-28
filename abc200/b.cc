#include <bits/stdc++.h>

int main()
{
	int k;
	std::string n;

	std::cin >> n >> k;
	for (int i = 0; i < k; i++) {
		auto num = std::stoull(n);
		if (num % 200 == 0) {
			num /= 200;
			n = std::to_string(num);
		} else {
			n += "200";
		}
	}
	std::cout << n << std::endl;

	return 0;
}
