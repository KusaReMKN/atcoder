((stdin) => {
	const [k, a, b] = stdin.split(/\s/g);
	for (let i = +a; i <= +b; i++) {
		if (i % +k === 0) {
			console.log('OK');
			return;
		}
	}
	console.log('NG');
})(require('fs').readFileSync('/dev/stdin', 'UTF-8'));
