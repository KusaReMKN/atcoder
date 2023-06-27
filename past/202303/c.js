const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const p = lines.shift().split(' ').map(e => +e);

const x = p.reduce((x, e, i) => (x[e-1] = i+1, x), []);

console.log(x.join(' '));
