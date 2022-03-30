((stdin) => {
	let [l1, l2] = stdin.split('\n');
	let [n, k] = l1.split(' ');
	[n, k] = [+n, +k];
	let a = l2.split(' ');

	for (let i = 0; i < n; i++) {
		a[i] = +a[i];
	}

	for (let j = 0; j < k && j < 41; j++) {
		let b = new Array(n).fill(0);
		for (let i = 0; i < n; i++) {
			let l = Math.max(0, i - a[i]);
			let r = Math.min(n - 1, i + a[i]);
			b[l]++;
			if (r + 1 < n) { b[r + 1]--; }
		}
		for (let i = 1; i < n; i++) { b[i] += b[i - 1]; }
		a = b.slice();
	}
	console.log(a.join(' '));

})(require("fs").readFileSync("/dev/stdin", "UTF-8"));
