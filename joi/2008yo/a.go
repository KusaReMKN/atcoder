package main

import "fmt"

func main() {
	var s int
	fmt.Scan(&s)
	s = 1000 - s

	k := []int{ 500, 100, 50, 10, 5, 1 }
	c := 0
	for _, e := range k {
		c += s / e
		s %= e
	}
	fmt.Println(c)
}
