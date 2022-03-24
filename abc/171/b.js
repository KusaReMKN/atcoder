((stdin) => {
	let [l1, l2] = stdin.split('\n');
	let [n, k] = l1.split(' ');
	let p = l2.split(' ');

	p.sort((a, b) => +a - +b);
	let sum = 0;
	for (let i = 0; i < k; i++) {
		sum += +p[i];
	}

	console.log(sum);
})(require("fs").readFileSync("/dev/stdin", "UTF-8"));
