const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const s = [...lines.shift()].map(e => +e);

const r = s.reduce((r, c) => (r[c-1]++, r), [ 0, 0, 0, 0 ]);
console.log(Math.max(...r), Math.min(...r));
