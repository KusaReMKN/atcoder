const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const p = lines.filter((_, i) => 0 <= i && i < 3).map(e => +e);
const j = lines.filter((_, i) => 3 <= i && i < 5).map(e => +e);

console.log(Math.min(...p) + Math.min(...j) - 50);
