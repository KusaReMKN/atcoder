import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
const n = +lines.shift();
const s = lines.filter((_, i) => i < n);

const m = new Set();
s.forEach((e, i) => s.forEach((v, j) => i !== j && m.add(e + v)));
console.log(m.size);
