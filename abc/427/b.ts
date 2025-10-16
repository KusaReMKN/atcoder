import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const a = [ 1 ];
[...Array(n)].forEach(_ => {
	const k = a.map(e => [...`${e}`].reduce((c, e) => c + +e, 0));
	a.push(k.reduce((c, e) => c + e, 0));
	console.error(a.at(-1));
});
console.log(a[n]);
