package main

import "fmt"

func main() {
	var a, b, c, d int
	fmt.Scan(&a, &b, &c, &d)

	ad := a * d
	bc := b * c
	bd := b * d
	r := "="
	if ad * bd < bc * bd {
		r = "<"
	}
	if ad * bd > bc * bd {
		r = ">"
	}
	fmt.Println(r)
}
