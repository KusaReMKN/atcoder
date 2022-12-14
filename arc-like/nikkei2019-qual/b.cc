#include <iostream>
#include <string>

int
main(void)
{
	int n;
	std::string a, b, c;
	int cnt;

	std::cin >> n;
	std::cin >> a >> b >> c;
	cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == b[i] && b[i] == c[i])
			continue;
		if (a[i] == b[i] || b[i] == c[i] || a[i] == c[i])
			cnt++;
		else
			cnt += 2;
	}
	std::cout << cnt << std::endl;

	return 0;
}
