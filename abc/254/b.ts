import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const n = +input.trim();
const a = [[1]];

const f = (i, j) => (a[i][j] || 0);

console.log(1);
for (let i = 1; i < n; i++) {
	a.push([]);
	for (let j = 0; f(i-1, j-1) + f(i-1, j) !== 0; j++)
		a[i].push(f(i-1, j-1) + f(i-1, j));
	console.log(a[i].join(' '));
}
