import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const a = lines.shift().split(' ').map(e => +e);
const b = lines.shift().split(' ').map(e => +e);
const d = a.map((e, i) => Math.abs(e - b[i]));
const k = d.reduce((c, e) => c + BigInt(e), 0n);
console.log(k.toString());
