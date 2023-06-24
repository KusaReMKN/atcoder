const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const a = lines.shift().split(' ').map(e => +e);

const b = a.reduce((b, e, i) => (b[i/7|0] += e, b), [...Array(n)].map(_ => 0));

console.log(b.join(' '));
