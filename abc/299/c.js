const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const s = lines.shift();

const dango = ~s.indexOf('-') && ~s.indexOf('o');
const len = s.split(/-+/).map(e => e.length);

console.log(dango ? Math.max(...len) : -1);
