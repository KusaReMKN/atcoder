((stdin) => {
	if (stdin[1] === 'B') {
		console.log('ARC');
	}
	else {
		console.log('ABC');
	}
})(require('fs').readFileSync('/dev/stdin', 'UTF-8'));
