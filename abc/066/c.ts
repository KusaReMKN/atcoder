import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const a = lines[1].split(' ');
const b = [];

let i = 0;
for (const e of a)
	if (i++ % 2 == 0)
		b.push(+e);
	else
		b.unshift(+e);
if (i % 2 == 1)
	b.reverse();
console.log(b.join(' '));
