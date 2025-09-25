#include <iostream>
#include <vector>

int
main(void)
{
	int n, m, k;
	std::cin >> n >> m >> k;

	std::vector<std::vector<bool>> v(n, std::vector<bool>(m));
	for (int i = 0; i < k; i++) {
		int a, b;
		std::cin >> a >> b;
		v[a-1][b-1] = true;
		for (int j = 0; j < m; j++)
			if (!v[a-1][j])
				goto next;
		std::cout << a << " ";
next:
		;
	}
	std::cout << std::endl;

	return 0;
}
