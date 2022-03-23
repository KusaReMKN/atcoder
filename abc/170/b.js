((stdin) => {
	let [x, y] = stdin.split(' ');
	let tsuru = +x * 2 - +y / 2;
	if (tsuru >= 0 && tsuru <= +x && +y % 2 === 0) {
		console.log('Yes');
	} else {
		console.log('No');
	}
})(require("fs").readFileSync("/dev/stdin", "UTF-8"));
