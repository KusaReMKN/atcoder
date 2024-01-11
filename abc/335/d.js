const input = require('fs').readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const n = +lines.shift();

const m = [...Array(n)].map(_ => [...Array(n)].map(_ => 0));

let x = 0;
let y = 0;
let d = 0;
for (let i = 1; i <= n*n; i++) {
	m[y][x] = i === n*n ? 'T' : i;
	switch (d % 4) {
		case 0:
			if (m[y]?.[++x] !== 0)
				x--, d++, y++;
			break;
		case 1:
			if (m[++y]?.[x] !== 0)
				y--, d++, x--;
			break;
		case 2:
			if (m[y]?.[--x] !== 0)
				x++, d++, y--;
			break;
		case 3:
			if (m[--y]?.[x] !== 0)
				y++, d++, x++;
			break;
	}
}

m.forEach(r => console.log(r.join(' ')));
