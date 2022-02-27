import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf8');
const s = input.substr(0, 4);
const arr = [];
let cnt = 0;

for (const c of s)
	arr[c] = (arr[c] || 0) + 1;
for (const c in arr)
	cnt++;
console.log(cnt === 2 ? 'Yes' : 'No');
