import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const s = lines.filter((_, i) => i < n);
const w = s.reduce((m, c) => Math.max(m, c.length), 0);

console.log(
	s.map(c => '.'.repeat(w-c.length>>1) + c + '.'.repeat(w-c.length>>1))
		.join('\n')
);
