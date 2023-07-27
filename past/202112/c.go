package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	k := [6]int{}
	for i := 0; i < n; i++ {
		var p, v string
		fmt.Scan(&p, &v)

		if v == "AC" && k[p[0] - 'A'] == 0 {
			k[p[0] - 'A'] = i+1
		}
	}

	for i := 0; i < 6; i++ {
		fmt.Println(k[i])
	}
}
