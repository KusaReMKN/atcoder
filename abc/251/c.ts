import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const array = {};

lines.shift(); lines.pop();
for (let i = 0; i < lines.length; i++) {
	const [s, t] = lines[i].split(' ');
	if (array[s] === undefined)
		array[s] = { t, i };
}
let max = 0;
let line = 0;
for (const s in array) {
	if (max < +array[s].t) {
		max = +array[s].t;
		line = array[s].i+1;
	}
}
console.log(line);
