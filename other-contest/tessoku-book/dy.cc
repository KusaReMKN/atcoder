#include <deque>
#include <iostream>
#include <string>

int
main(void)
{
	int n, x;
	std::cin >> n >> x;

	std::string a;
	std::cin >> a;

	std::deque<int> q;
	q.push_back(x-1);
	a[x-1] = '@';
	while (q.size() > 0) {
		auto k = q[0];
		q.pop_front();

		if (k > 0 && a[k-1] == '.') {
			a[k-1] = '@';
			q.push_back(k-1);
		}
		if (k < a.size()-1 && a[k+1] == '.') {
			a[k+1] = '@';
			q.push_back(k+1);
		}
	}
	std::cout << a << std::endl;

	return 0;
}
