const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const s = lines.shift();
const t = lines.shift();

console.log(s + t);
