import * as fs from 'fs';

const f = n => n === 1 ? [1] : [].concat(f(n-1), [n], f(n-1));

const n = +fs.readFileSync('/dev/stdin', 'utf-8').trim();
console.log(f(n).join(' '));
