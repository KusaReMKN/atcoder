const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const d = +lines.shift();
const [ ad, af ] = lines.shift().split('.').map(e => BigInt(e));
const [ bd, bf ] = lines.shift().split('.').map(e => BigInt(e));

const k = 10n ** BigInt(d);
const f = af + bf;
const q = ad + bd + f / k;

console.log(q + '.' + ([...Array(d)].map(_ => 0).join('') + f).slice(-d));
