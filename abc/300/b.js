const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ h, w ] = lines.shift().split(' ').map(e => +e);
lines.pop();
const a = lines.reduce((p, c, i) => (i < h && p.push([...c]), p), []);
const b = lines.reduce((p, c, i) => (i >= h && p.push([...c]), p), []);

const isSame = (x, y) => JSON.stringify(x) === JSON.stringify(y);
const result = a.some((r, i) => {
	b.push(b.shift());
	return r.some((_, j) => {
		b.forEach((_, k) => b[k].push(b[k].shift()));
		return isSame(a, b);
	});
});
console.log(result ? "Yes" : "No");
