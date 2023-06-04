const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const sa = lines.filter((_, i) => i < n).map(e => e.split(' '))
	.map(e => ({ s: e[0], a: +e[1] }));

const head = sa.findIndex(e => e.a === Math.min(...sa.map(e => e.a)));
sa.forEach((_, i) => console.log(sa[(head + i) % n].s));
