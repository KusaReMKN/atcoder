const input = require('fs').readFileSync('/dev/stdin', 'UTF-8');
const lines = input.split('\n');
const s = lines.shift();
const c = lines.shift();

console.log(s.replace(new RegExp(c, 'g'), c+c));
