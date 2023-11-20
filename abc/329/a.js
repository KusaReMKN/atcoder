const input = require('fs').readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');

const s = lines.shift();
console.log([...s].join(' '));
