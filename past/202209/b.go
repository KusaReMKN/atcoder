package main

import "fmt"

func main() {
	var n string
	fmt.Scan(&n)

	r := "0"
	if len(n) > 2 {
		r = n[:len(n)-2]
	}
	fmt.Print(r)
}
