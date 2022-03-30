((stdin) => {
	console.log(stdin.slice(0, 3));
})(require("fs").readFileSync("/dev/stdin", "UTF-8"));
