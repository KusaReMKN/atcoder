#include <iostream>
#include <vector>

struct grid {
	int x, y;
};

static int
isNeighbor(struct grid p, struct grid q)
{
	for (int i = -1; i <= 1; i++)
		for (int j = -1; j <= 1; j++) {
			if (i + j == 0)
				continue;
			if (p.x+i == q.x && p.y+j == q.y)
				return 1;
		}
	return 0;
}

int
main(void)
{
	int n;
	struct grid grid;
	std::vector<std::vector<struct grid>> grids;
	std::vector<int> nei;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> grid.x >> grid.y;
		nei.erase(nei.begin(), nei.end());
		for (int j = 0; j < grids.size(); j++) {
			for (int k = 0; k < grids[j].size(); k++)
				if (isNeighbor(grids[j][k], grid)) {
					nei.push_back(j);
					break;
				}
		}
		if (nei.size() > 1) {
			for (int j = 1; j < nei.size(); j++) {
				grids[nei[0]].insert(grids[nei[0]].end(),
						grids[nei[j]].begin(),
						grids[nei[j]].end());
				grids[nei[j]].erase(grids[nei[j]].begin(),
						grids[nei[j]].end());
			}
		}
		if (!nei.empty()) {
			grids[nei[0]].push_back(grid);
		} else {
			for (int j = 0; j < grids.size(); j++)
				if (grids[j].empty()) {
					grids[j].push_back(grid);
					goto next;
				}
			grids.push_back({ grid });
		}
next:		(void)0;
	}
	int cnt = 0;
	for (int i = 0; i < grids.size(); i++)
		if (!grids[i].empty())
			cnt++;
	std::cout << cnt << std::endl;

	return 0;
}
