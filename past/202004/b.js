const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const s = [...lines.shift()];

const v = s.reduce((v, e) => (v[e] = (v[e] || 0) + 1, v), {});

const max = Object.keys(v).reduce(
	(max, key) => v[max] > v[key] ? max : key, s[0]
);

console.log(max);
