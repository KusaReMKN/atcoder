import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const array = { '_': 0 };

const n = +lines.shift().trim();
for (let i = 0; i < n; i++) {
	const s = lines.shift().trim();
	array[s] = (array[s] || 0) + 1;
}
const m = +lines.shift().trim();
for (let i = 0; i < m; i++) {
	const t = lines.shift().trim();
	array[t] = (array[t] || 0) - 1);
}
let max = -9999;
for (const key of Object.keys(array))
	if (max < array[key])
		max = array[key];
console.log(max);
