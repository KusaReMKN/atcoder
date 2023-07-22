package main

import (
	"fmt"
	"strings"
)

func main() {
	var (
		n int
		s string
	)
	fmt.Scan(&n, &s)

	a := strings.Index(s, "A")
	b := strings.Index(s, "B")
	c := strings.Index(s, "C")
	max := a
	if max < b {
		max = b
	}
	if max < c {
		max = c
	}
	fmt.Println(max + 1)
}
