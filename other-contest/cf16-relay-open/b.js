const input = require('fs').readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');

const s = lines.shift();
const a = [ ...s ];
const t = a.reverse().map(c => ({ b: 'd', d: 'b', p: 'q', q: 'p' }[c])).join('');

console.log(s === t ? 'Yes' : 'No');
