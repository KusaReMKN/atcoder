import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ n, k ] = lines.shift().split(/\s+/).map(e => +e);
const a = lines.shift().split(/\s+/).map(e => +e);

a.sort((a, b) => +a - +b);
const d = [...Array(k+1)].map((_, i) => a[i+(n-k)-1] - a[i]);
console.log(Math.min(...d));
