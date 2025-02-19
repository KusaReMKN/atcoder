const fs = require('fs');
const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ a, b ] = lines.shift().split(' ').map(e => BigInt(e));

function
gcd(a, b)
{
	let k;

	do {
		k = a % b;
		a = b;
		b = k;
	} while (k !== 0n);

	return a;
}
function
lcm(a, b)
{
	return a / gcd(a, b) * b;
}

const r = lcm(a, b);
console.log(r > 1000000000000000000n ? 'Large' : r.toString());
