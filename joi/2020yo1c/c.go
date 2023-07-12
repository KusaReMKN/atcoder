package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	var a0 int
	fmt.Scan(&a0);

	cnt, max := 1, 0
	for i := 1; i < n; i++ {
		var a int
		fmt.Scan(&a)
		if a0 <= a {
			cnt++
		} else {
			if cnt > max {
				max = cnt
			}
			cnt = 1
		}
		a0 = a
	}
	if cnt > max {
		max = cnt
	}
	fmt.Println(max)
}
