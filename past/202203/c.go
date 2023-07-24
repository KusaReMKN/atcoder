package main

import "fmt"

func main() {
	var a string
	fmt.Scan(&a)

	cnt := -1
	for len(a) > 3 {
		a = a[:len(a)-3]
		cnt++
	}
	fmt.Print(a)
	fmt.Printf("%c\n", 'a' + cnt)
}
