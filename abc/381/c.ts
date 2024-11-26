import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const s = lines.shift();

const match = s.match(/1*\/2*/g);
const length = match.map(e => Math.min(...e.split('/').map(e => e.length)));
console.log(Math.max(...length)*2+1);
