((stdin) => {
	let [a, v, b, w, t] = stdin.split(/\s/);
	[a, v, b, w, t] = [+a, +v, +b, +w, +t];

	let distance = a - b;
	let speed = v - w;
	let move = t * speed;

	if (b > a) {
		if (move + distance >= 0) {
			console.log('YES');
		}
		else {
			console.log('NO');
		}
	}
	else {
		if (move - distance >= 0) {
			console.log('YES');
		}
		else {
			console.log('NO');
		}
	}
})(require("fs").readFileSync("/dev/stdin", "UTF-8"));
