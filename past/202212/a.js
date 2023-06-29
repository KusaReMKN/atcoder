const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ n, x, y ] = lines.shift().split(' ').map(e => BigInt(e));

console.log(String((n / x) * y));
