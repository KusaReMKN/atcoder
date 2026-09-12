import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [h, w] = lines.shift().split(' ').map(e => +e);
let c = lines.filter((_, i) => i < h).map(e => [...e]);
const rotate = m => {
	const k = [...Array(m[0].length)].map(e => []);
	m.forEach((r, i) => r.forEach((c, j) => k[j][i] = c));
	return k;
};
for (let i = 0; i < 2; i++) {
	while (/^\.*$/.test(c[0].join('')))
		c.shift();
	while (/^\.*$/.test(c.at(-1).join('')))
		c.pop();
	c = rotate(c);
}
console.log(c.map(r => r.join('')).join('\n'));
