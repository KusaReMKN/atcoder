const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ a, b ] = lines.shift().split(' ').map(e => +e);
const s = lines.shift();

console.log(a <= s.length && s.length <= b ? "YES" : "NO");
