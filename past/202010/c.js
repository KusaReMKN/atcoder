const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ n, m ] = lines.shift().split(' ').map(e => +e);
const s = lines.filter((_, i) => i < n).map(r => [...r]);

const a = s.map((r, i) => r.map((c, j) => {
	let cnt = 0;
	for (let di = -1; di <= 1; di++) for (let dj = -1; dj <= 1; dj++)
		if (s[i+di] && s[i+di][j+dj] === '#')
			cnt++;
	return cnt;
}));

console.log(a.map(r => r.join('')).join('\n'));
