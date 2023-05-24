const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ h, w ] = lines.shift().split(' ').map(e => +e);
const a = lines.reduce((p, c, i) => (i < h && p.push(c.split(' ').map(e => +e)), p), []);
const aT = a.reduce((p, r, i) => (r.forEach((e, j) => (p[j] = p[j] || [], p[j][i] = e)), p), []);

const lsum = a.map(r => r.reduce((p, e) => p + e, 0));
const csum = aT.map(r => r.reduce((p, e) => p + e, 0));

const b = a.map((r, i) => r.map((e, j) => lsum[i] + csum[j] - e));
console.log(b.map(r => r.join(' ')).join('\n'));
