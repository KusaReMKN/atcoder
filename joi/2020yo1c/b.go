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

	fmt.Println(strings.ReplaceAll(s, "joi", "JOI"))
}
