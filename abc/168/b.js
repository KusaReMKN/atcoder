const main = (stdin) => {
	const [k, s] = stdin.split('\n');
	console.log(`${s.slice(0, +k)}${s.length > k ? '...' : ''}`);
}

main(require('fs').readFileSync('/dev/stdin', 'UTF-8'));
