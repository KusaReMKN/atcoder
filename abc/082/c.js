const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const a = lines.shift().split(' ').map(e => +e);

const m = a.reduce((m, e) => (m[e] = (m[e] || 0) + 1, m), []);
const keys = Object.keys(m);
const r = keys.reduce((r, i) => r + (m[i] < +i ? m[i] : m[i] - +i), 0);
console.log(r);
