const input = require('fs').readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
let s = lines.shift();
const n = +lines.shift();
const t = lines.filter((_, i) => i < n)
	.map(e => e.replaceAll('*', '\\S'))
	.map(e => new RegExp('\\b' + e + '\\b', 'g'));
t.forEach(e => (s = s.replaceAll(e, m => '*'.repeat(m.length))));
console.log(s);
