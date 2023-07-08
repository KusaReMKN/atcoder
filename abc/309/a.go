package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)

	a--
	b--
	ax, ay := a % 3, a / 3
	bx, by := b % 3, b / 3
	r := "No"
	if ay == by && ax + 1 == bx {
		r = "Yes"
	}
	fmt.Println(r)
}
