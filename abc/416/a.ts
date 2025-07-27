import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
const [ n, l, r ] = lines.shift().split(' ').map(e => +e);
const s = lines.shift();

console.log(![...s.substring(l-1, r)].some(e => e !== 'o') ? 'Yes' : 'No');
