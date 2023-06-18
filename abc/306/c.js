const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const a = lines.shift().split(' ').map(e => +e);

const v = [...Array(n)].map(_ => []);
a.forEach((e, i) => v[e-1].push(i+1));
const r = v.map((e, i) => ({ f: e[1], i: i+1 }));
r.sort((a, b) => a.f - b.f);

console.log(r.map(e => e.i).join(' '));
