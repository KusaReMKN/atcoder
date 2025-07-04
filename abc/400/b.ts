import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ n, m ] = lines.shift().split(' ').map(e => BigInt(e));

let x = 0n;
for (let i = 0n; i <= m; i++) {
	x += n ** i;
	if (x > 1000000000n) {
		x = -1n;
		break;
	}
}
console.log(x < 0 ? 'inf' : x.toString());
