const input = require('fs').readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = BigInt(lines.shift());

let sum = 0n;
for (let i = 0n; i <= n; i++)
	sum += 5n ** i;
console.log(sum.toString());
