#include <iostream>

#include <atcoder/all>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	atcoder::dsu d(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		std::cin >> a >> b;
		d.merge(a-1, b-1);
	}
	std::cout << d.groups().size()-1 << std::endl;

	return 0;
}
