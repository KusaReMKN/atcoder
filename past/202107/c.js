const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const s = lines.shift();
const ss = BigInt(s);
const [ l, r ] = lines.shift().split(' ').map(e => BigInt(e));

const invalid = (s[0] === '0' && s.length > 1);
console.log((invalid || ss < l || r < ss) ? 'No' : 'Yes');
