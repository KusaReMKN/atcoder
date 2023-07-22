package main

import "fmt"

func main() {
	var n, m int
	fmt.Scan(&n, &m)

	prod := n
	for i := 0; i < m; i++ {
		if prod <= 1000000000 {
			fmt.Print("o")
			prod *= n
		} else {
			fmt.Print("x")
		}
	}
	fmt.Println()
}
