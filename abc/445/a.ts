import * as fs from 'fs';

const s = fs.readFileSync('/dev/stdin', 'utf-8').split('\n')[0];

console.log(s.at(0) === s.at(-1) ? 'Yes' : 'No');
