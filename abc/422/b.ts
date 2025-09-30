import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ h, w ] = lines.shift().split(' ').map(e => +e);
const s = lines.filter((_, i) => i < h);

let yes = true;
s.forEach((r, i) => {
	[...r].forEach((c, j) => {
		if (c !== '#')
			return;
		const k = [
			[ -1, 0 ],
			[ +1, 0 ],
			[ 0, -1 ],
			[ 0, +1 ],
		];
		let n = 0;
		k.forEach(e => s[i+e[0]]?.[j+e[1]] === '#' && n++);
		if (n !== 2 && n !== 4)
			yes = false;
	});
});
console.log(yes ? 'Yes' : 'No');
