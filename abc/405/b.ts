import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
const [ n, m ] = lines.shift().split(' ').map(e => +e);
const a = lines.shift().split(' ').map(e => +e > m ? 0 : +e);

const g = new Map();
a.forEach(e => g.set(e, (g.get(e) || 0) + 1));
g.delete(0);
const j = g.size < m ? 0 : Infinity;
const k = a.reverse().findIndex(e => {
	const t = g.get(e);
	if (t !== 1)
		g.set(e, t-1);
	else
		g.delete(e);
	return g.size < m;
});
console.log(Math.min(k+1, j));
