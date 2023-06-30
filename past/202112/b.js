const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const ab = lines.filter((_, i) => i < n)
	.map(e => e.split(' ').map(e => +e))
	.map(e => ({ a: e[0], b: e[1] }));

const c = [ 500, 100, 50, 10, 5, 1 ];
const r = ab.reduce((r, e) => {
	let d = e.b - e.a;
	const v = c.reduce((v, e) => {
		const k = d / e | 0;
		v[e] = k;
		d -= e * k;
		return v;
	}, {});
	return r + v[5] + v[50];
}, 0);

console.log(r)
