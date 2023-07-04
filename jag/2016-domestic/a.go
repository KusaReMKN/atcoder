package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	aun := 0
	for i := 0; i < n && aun >= 0; i++ {
		var s string
		fmt.Scan(&s)
		switch s {
		case "A":
			aun++
		case "Un":
			aun--
		}
	}

	res := "YES"
	if aun != 0 {
		res = "NO"
	}
	fmt.Println(res);
}
