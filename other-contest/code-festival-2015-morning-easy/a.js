const fs = require('fs');;

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();

let i;
for (i = 0; i*i < n; i++)
	;

console.log(i*i - n);
