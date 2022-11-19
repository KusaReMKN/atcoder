#include <iostream>
#include <string>
#include <vector>

struct rl {
	int c;
	int l;
};

int
main(void)
{
	std::string s, t;
	int cnt, prev;
	std::vector<rl> srl, trl;
	rl tmp;

	std::cin >> s >> t;
	cnt = 1;
	prev = s[0];
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == prev)
			cnt++;
		else {
			tmp.c = prev, tmp.l = cnt;
			srl.push_back(tmp);
			prev = s[i], cnt = 1;
		}
	}
	tmp.c = prev, tmp.l = cnt;
	srl.push_back(tmp);
	cnt = 1;
	prev = t[0];
	for (int i = 1; i < t.length(); i++) {
		if (t[i] == prev)
			cnt++;
		else {
			tmp.c = prev, tmp.l = cnt;
			trl.push_back(tmp);
			prev = t[i], cnt = 1;
		}
	}
	tmp.c = prev, tmp.l = cnt;
	trl.push_back(tmp);
	if (srl.size() != trl.size()) {
no:		std::cout << "No" << std::endl;
		return 0;
	}
	for (int i = 0; i < srl.size(); i++) {
		if (srl[i].c != trl[i].c)
			goto no;
		if (srl[i].l == 1) {
			if (trl[i].l == 1)
				continue;
			else
				goto no;
		} else {
			if (trl[i].l >= srl[i].l)
				continue;
			else
				goto no;
		}
	}
	std::cout << "Yes" << std::endl;

	return 0;
}
