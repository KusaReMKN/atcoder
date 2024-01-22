const input = require('fs').readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ h, w, k ] = lines.shift().split(' ').map(e => +e);
const s = lines.filter((_, i) => i < h).map(r => [...r]);
const t = [...Array(w)].map(_ => [...Array(h)]);
s.forEach((r, i) => r.forEach((e, j) => t[j][i] = e));

let min = Infinity;
s.forEach(r => {
	const exes = r.map(c => c === 'x')
		.reduce((c, e) => (c.push(c.at(-1) + +e), c), [ 0 ]);
	const dots = r.map(c => c === '.')
		.reduce((c, e) => (c.push(c.at(-1) + +e), c), [ 0 ]);
	for (let i = 0; i < r.length - k + 1; i++)
		if (exes[i+k]-exes[i] === 0)
			min = Math.min(min, dots[i+k]-dots[i]);
});
t.forEach(r => {
	const exes = r.map(c => c === 'x')
		.reduce((c, e) => (c.push(c.at(-1) + +e), c), [ 0 ]);
	const dots = r.map(c => c === '.')
		.reduce((c, e) => (c.push(c.at(-1) + +e), c), [ 0 ]);
	for (let i = 0; i < r.length - k + 1; i++)
		if (exes[i+k]-exes[i] === 0)
			min = Math.min(min, dots[i+k]-dots[i]);
});

console.log(min === Infinity ? -1 : min);
