const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ n, m ] = lines.shift().split(' ').map(e => +e);
const a = lines.filter((_, i) => i < m).map(r => r.split(' ').map(e => +e));

const map = [...Array(n+1)].map(_ => []);

a.forEach(r => r.forEach(
	(_, i) => i > 0 && (map[r[i]][r[i-1]] = map[r[i-1]][r[i]] = true)
));
let cnt = 0;
for (let i = 1; i <= n; i++)
	for (let j = i+1; j <= n; j++)
		if (!map[i][j])
			cnt++;
console.log(cnt);
