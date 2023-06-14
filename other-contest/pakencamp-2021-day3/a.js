const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const s = lines.filter((_, i) => i < 4);

const res = s.reduce((res, e) => e === '1111' ? res+1 : res, 0);

console.log(res);
