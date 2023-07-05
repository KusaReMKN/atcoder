package main

import "fmt"

func main() {
	var x, a, b, c int
	fmt.Scan(&x, &a, &b, &c)

	hare := b * x + a * b * c
	tortoise := a * x

	r := "Tie"
	if hare < tortoise {
		r = "Hare"
	} else if hare > tortoise {
		r = "Tortoise"
	}
	fmt.Println(r)
}
