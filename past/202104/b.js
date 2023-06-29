const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const s = lines.shift();

const index = s.indexOf('post');
console.log(index !== -1 ? (index >>> 2) + 1 : 'none');
