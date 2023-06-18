const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const a = '0b' + lines.shift().split(' ').reverse().join('');
const r = String(BigInt(a));

console.log(r);
