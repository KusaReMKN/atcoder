((stdin) => {
	let b = 100;
	let i = 0;
	for (i = 0; b < +stdin; i++) {
		b = Math.floor(b * 1.01);
	}
	console.log(i);
})(require('fs').readFileSync('/dev/stdin', 'UTF-8'));
