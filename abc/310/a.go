package main

import "fmt"

func main() {
	var n, p, q int
	fmt.Scan(&n, &p, &q)

	min := 100001
	for i := 0; i < n; i++ {
		var d int
		fmt.Scan(&d)
		if d < min {
			min = d
		}
	}

	r := min + q
	if p < r {
		r = p
	}
	fmt.Println(r)
}
