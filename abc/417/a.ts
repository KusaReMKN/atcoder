import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ n, a, b ] = lines.shift().split(' ').map(e => +e);
const s = lines.shift();

console.log(s.substring(a, n-b));
