((stdin) => {
	let [l1, l2] = stdin.split('\n');
	let [x, n] = l1.split(' ');
	[x, n] = [+x, +n];
	let p = l2.split(' ');
	for (let i = 0; i < n; i++) {
		p[i] = +p[i];
	}

	let d = 0;
	for (d = 0; d <= 100; d++) {
		if (!p.includes(x - d)) {
			console.log(x - d);
			return 0;
		}
		if (!p.includes(x + d)) {
			console.log(x + d);
			return 0;
		}
	}

})(require("fs").readFileSync("/dev/stdin", "UTF-8"));
