import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');

const [n, m] = lines.shift().trim().split(' ');

const a = [];
for (const i in [...Array(+n)])
	a.push([...lines.shift()]);

const b = [];
for (const i in [...Array(+m)])
	b.push([...lines.shift()]);

const f = (a, i, j, m) => {
	const r = [];
	for (const k in [...Array(m)]) {
		const s = [];
		for (const l in [...Array(m)])
			s.push(a[+k+i][+l+j]);
		r.push(s);
	}
	return r;
};

const g = () => {
	if (+n === +m && +n === 1)
		return JSON.stringify(a) === JSON.stringify(b);
	for (const i in [...Array(+n-+m)])
		for (const j in [...Array(+n-+m)])
			if (JSON.stringify(f(a, +i, +j, +m))
					=== JSON.stringify(b))
				return true;
	return false;
};

console.log(g() ? 'Yes' : 'No');
