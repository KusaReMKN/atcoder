#include <iostream>
#include <set>

int
main(void)
{
	std::set<int> st;
	int n;

	for (int i = 0; i < 5; i++) {
		std::cin >> n;
		st.insert(n);
	}
	std::cout << st.size() << std::endl;

	return 0;
}
