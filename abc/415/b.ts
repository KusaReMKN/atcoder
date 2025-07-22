import * as fs from 'fs';

const input = fs.readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
const s = lines.shift();
const t = [...s].reduce((c, e, i) => {
	if (e !== '#')
		return c;
	if (c.at(-1)?.length === 1)
		c.at(-1).push(i+1);
	else
		c.push([ i+1 ]);
	return c;
}, []);
console.log(t.map(e => e.join()).join('\n'));
