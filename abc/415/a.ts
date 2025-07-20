import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
const n = +lines.shift();
const a = new Set(lines.shift().split(' ').map(e => +e));
const x = +lines.shift();

console.log(a.has(x) ? 'Yes': 'No');
