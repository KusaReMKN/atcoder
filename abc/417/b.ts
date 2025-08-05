import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ n, m ] = lines.shift().split(' ').map(e => +e);
const a = lines.shift().split(' ').map(e => +e);
const b = lines.shift().split(' ').map(e => +e);

const g = new Map();
a.forEach(e => g.set(e, (g.get(e) || 0) + 1));

b.forEach(e => {
	const k = (g.get(e) || 1) - 1;
	if (k < 1)
		g.delete(e);
	g.set(e, k);
});

a.length = 0;
g.forEach((v, k) => a.push(...[...Array(v)].fill(k)));
console.log(a.join(' '));
