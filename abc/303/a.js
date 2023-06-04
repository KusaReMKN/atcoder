const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const s = lines.shift();
const t = lines.shift();

const notSimilar = [...s].some((_, i) => {
	if (s[i] === t[i])
		return false;
	const st = s[i] + t[i];
	if (/(1l|l1)/.test(st))
		return false;
	if (/(o0|0o)/.test(st))
		return false;
	return true;
});
console.log(notSimilar ? 'No' : 'Yes');
