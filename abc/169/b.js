((stdin) => {
	let [n, a] = stdin.split('\n');
	let r = BigInt(1);
	a = a.split(' ');
	a.sort();
	for (let i = 0; i < +n && r != 0 && r <= BigInt(10 ** 18); i++) {
		r *= BigInt(+a[i]);
	}
	if (r > BigInt(10 ** 18)) {
		r = -1;
	}
	console.log(`${r}`);
})(require("fs").readFileSync("/dev/stdin", "UTF-8"));
