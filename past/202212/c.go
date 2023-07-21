package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	a := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}

	m := map[int]struct{}{}
	for i := 0; i < n; i++ {
		for j := i+1; j < n; j++ {
			for k := j+1; k < n; k++ {
				m[a[i]*a[j]*a[k]] = struct{}{}
			}
		}
	}
	fmt.Println(len(m))
}
