const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ n, t ] = lines.shift().split(' ').map(e => +e);
const c = lines.shift().split(' ').map(e => +e);
const r = lines.shift().split(' ').map(e => +e);

const cr = [...Array(n)].map((_, i) => ({ i: i+1, c: c[i], r: r[i] }));

const ct = cr.reduce(
	(p, c) => c.c === t && p.r < c.r ? c : p,
	{ i: -1, c: -1, r: -1 }
);
const c1 = cr.reduce(
	(p, c) => c.c === cr[0].c && p.r < c.r ? c : p,
	{ i: -1, c: -1, r: -1 }
);

console.error(ct, c1);
console.log(ct.c < 0 ? c1.i : ct.i);
