import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const s = lines.filter((_, i) => i < n);

const maxl = Math.max(...s.map(r => r.length));
console.error(maxl);

const t = [...Array(maxl)].map(r => [...Array(n)].map(c => '*'));
s.forEach((r, i) => [...r].forEach((c, j) => t[j][n-i-1] = c));

t.forEach(r => console.log(r.join('').replace(/\**$/, '')));
