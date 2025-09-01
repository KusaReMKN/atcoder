import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ x, y ] = lines.shift().split(' ').map(e => +e);
const f = x => +[...x.toString()].reverse().join('');
const a = n => ({ 1: x, 2: y }[n] || f(a(n-1)+a(n-2)));

console.log(a(10));
