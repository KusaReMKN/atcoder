const a = [ 100, 100, 200 ];

for (let i = 3; i < 20; i++)
	a.push(a[i-1] + a[i-2] + a[i-3]);

console.log(a.pop());
