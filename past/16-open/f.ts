import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const s = lines.shift();

const t = s.split('*').map(e => BigInt(e) % 998244353n);
const t0 = t.shift();
console.log(`${t.reduce((c, e) => c * e % 998244353n, t0)}`);
