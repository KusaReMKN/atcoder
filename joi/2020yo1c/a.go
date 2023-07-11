package main

import "fmt"

func main() {
	var x, l, r int
	fmt.Scan(&x, &l, &r)

	k := x
	if x < l {
		k = l
	}
	if x > r {
		k = r
	}
	fmt.Println(k)
}
