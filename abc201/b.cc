#include <bits/stdc++.h>

struct hoge {
	std::string s;
	int t;
};

int main()
{
	int n;
	std::cin >> n;

	std::vector<struct hoge> foo(n);

	for (int i = 0; i < n; i++)
		std::cin >> foo[i].s >> foo[i].t;

	std::sort(foo.begin(), foo.end(), [](struct hoge a, struct hoge b) {
		return a.t > b.t;
	});

	std::cout << foo[1].s << std::endl;

	return 0;
}
