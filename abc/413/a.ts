import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
const [ n, m ] = lines.shift().split(' ').map(e => +e);
const a = lines.shift().split(' ').map(e => +e);

const s = a.reduce((c, e) => c+e, 0);
console.log(s <= m ? 'Yes' : 'No');
