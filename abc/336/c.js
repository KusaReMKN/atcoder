const input = require('fs').readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift() - 1;

const s = n.toString(5);
const r = [...s].map(c => +c * 2).join('');
console.log(r);
