const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ n, k ] = lines.shift().split(' ').map(e => +e);
const a = lines.shift().split(' ').map(e => +e);
const b = lines.shift().split(' ').map(e => +e);

const d = a.map((e, i) => Math.abs(e - b[i]));
const sum = d.reduce((sum, e) => sum + e, 0);
const diff = k - sum;

console.log(diff < 0 || diff & 1 ? "No" : "Yes");
