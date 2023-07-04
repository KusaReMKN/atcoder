package main

import "fmt"

func main() {
	var x, y, z int
	fmt.Scan(&x, &y, &z);

	t := z + x
	if t < y {
		t = y
	}
	fmt.Println(t);
}
