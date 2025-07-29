import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const s = lines.shift();

const t = s.split('#').map(e => e.replace(/^./, 'o')).join('#');
console.log(t);
