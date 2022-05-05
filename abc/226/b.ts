import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const array = {};

lines.shift();	// (N)
lines.pop();	// ''
for (const l of lines)
	array[l] = 0;
console.log(Object.keys(array).length);
