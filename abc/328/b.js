const input = require('fs').readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');

const n = +lines.shift();
const d = lines.shift().split(' ');

let cnt = 0;
for (let i = 1; i <= n; i++)
	for (let j = 1; j <= d[i-1]; j++)
		if (/^(.)(\1|\1\1|\1\1\1)$/.test(i+""+j))
			cnt++;
console.log(cnt);
