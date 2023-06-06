const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();

const s = String(n);
const h = String(n).slice(0, 3);
const z = [...Array(s.length - h.length)].map(_ => 0).join('');

console.log(h+z);
