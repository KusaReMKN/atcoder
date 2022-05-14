import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const array = {};

lines.shift(); lines.pop();
let head = lines[0][0];
let shiritori = true;
for (const w of lines) {
	if (w[0] !== head)
		shiritori = false;
	head = w.slice(-1);
	if ((array[w] = (array[w] || 0) + 1) > 1)
		shiritori = false;
}
console.log(shiritori ? 'Yes' : 'No');
