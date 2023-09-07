const input = require('fs').readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const p = lines.filter((_, i) => i < n);
const z = p.map(e => e.split(/[^0]/).at(-1).length);

console.log(Math.min(...z));
