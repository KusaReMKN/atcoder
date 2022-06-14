import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const [s, k] = input.split('\n');

const arr = {};

for (const i in [...Array(Math.max(s.length - +k + 1, 0))])
	arr[s.substring(+i, +i + +k)] = 1;

console.log(Object.keys(arr).length);
