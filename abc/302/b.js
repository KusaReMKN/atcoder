const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const [ h, w ] = lines.shift().split(' ').map(e => +e);

const diff = [
	[0, 1], [0, -1], [1, 0], [-1, 0], [1, 1], [1, -1], [-1, 1], [-1, -1]
];

const s = lines;
lines.forEach((r, i) => [...r].forEach((_, j) => diff.forEach(d => {
	const str = [];
	const pos = [];
	for (let k = 0; k < 5; k++) {
		const dd = d.map(e => e * k);
		if (s[i+dd[0]] && s[i+dd[0]][j+dd[1]]) {
			str.push(s[i+dd[0]][j+dd[1]]);
			pos.push([ i+dd[0]+1, j+dd[1]+1 ]);
		} else {
			return;
		}
	}
	if (str.join('') === 'snuke')
		pos.forEach(p => console.log(p[0], p[1]));
})));
