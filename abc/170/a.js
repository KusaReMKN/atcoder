((stdin) => {
	let x = stdin.split(' ');
	for (let i = 0; i < 5; i++) {
		if (+x[i] !== i + 1) {
			console.log(i + 1);
		}
	}
})(require("fs").readFileSync("/dev/stdin", "UTF-8"));
