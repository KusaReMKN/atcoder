const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf-8');
const s = input.split('\n').shift();

if (/[CEFGHIJKLMNSTUVWXYZ]{2}[ADOPQR][CEFGHIJKLMNSTUVWXYZ]/.test(s))
	console.log('yes');
else
	console.log('no');
