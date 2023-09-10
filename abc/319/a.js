const input = require('fs').readFileSync('/dev/stdin', 'utf-8');
const lines = input.split('\n');
const s = lines.shift();

const tab = {
	'tourist': 3858,
	'ksun48': 3679,
	'Benq': 3658,
	'Um_nik': 3648,
	'apiad': 3638,
	'Stonefeang': 3630,
	'ecnerwala': 3613,
	'mnbvmar': 3555,
	'newbiedmy': 3516,
	'semiexp': 3481,
};

console.log(tab[s]);
