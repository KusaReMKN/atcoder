import * as fs from 'fs';
const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ n, m ] = lines.shift().split(' ').map(e => +e);
const s = lines.filter((_, i) => i < n);
const c = [...Array(n)].fill(0);
for (let i = 0; i < m; i++) {
	const r = s.map(e => e[i]);
	const z = [...r].reduce((c, e, i) => e === '0' ? [ ...c, i ] : c, []);
	const o = [...r].reduce((c, e, i) => e === '1' ? [ ...c, i ] : c, []);
	const l = z.length < o.length && z.length > 0 ? z : o;
	l.forEach(e => c[e]++);
}
const r = c.reduce((r, e, i) => e === Math.max(...c) ? [...r, i+1] : r, []);
console.log(r.join(' '));
