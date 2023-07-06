package main

import "fmt"

func main() {
	var a, b, x, y int
	fmt.Scan(&a, &b, &x, &y)

	r := x / a
	if r > y / b {
		r = y / b
	}
	fmt.Println(r)
}
