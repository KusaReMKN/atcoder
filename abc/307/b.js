const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();
const s = lines.filter((_, i) => i < n);

function
isPalindrome(s)
{
	const k = [...s].reverse().join('');
	return k === s;
}

let flag = false;
quit:
for (let i = 0; i < n; i++)
	for (let j = 0; j < n; j++)
		if (i !== j && isPalindrome(s[i] + s[j])) {
			flag = true;
			break quit;
		}
console.log(flag ? "Yes" : "No");
