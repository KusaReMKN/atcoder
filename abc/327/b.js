const input = require('fs').readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const b = BigInt(lines.shift());

let a = -1n;
for (let i = BigInt(0); i ** i <= b; i++)
	if (i ** i === b)
		a = i;
console.log(a.toString());
