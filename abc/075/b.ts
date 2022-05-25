import * as fs from 'fs';

function count(arr, i, j) {
	let cnt = 0;
	for (let a = -1; a <= 1; a++)
		for (let b = -1; b <= 1; b++)
			if (arr[i+a] && arr[i+a][j+b] === '#')
				cnt++;
	return arr[i][j] === '#' ? '#' : cnt;
}

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');

lines.shift(); lines.pop();
for (const i in lines) {
	const tmp = [];
	for (const j in lines[i])
		tmp.push(count(lines, +i, +j));
	console.log(tmp.join(''));
}
