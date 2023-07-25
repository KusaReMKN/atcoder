package main

import "fmt"

func main() {
	p := make([][]int, 3)
	for i := 0; i < 3; i++ {
		p[i] = make([]int, 6)
		for j := 0; j < 6; j++ {
			fmt.Scan(&p[i][j])
		}
	}

	r := make([]int, 18)
	for i1 := 0; i1 < 6; i1++ {
		for i2 := 0; i2 < 6; i2++ {
			for i3 := 0; i3 < 6; i3++ {
				r[i1+i2+i3+2] += p[0][i1] * p[1][i2] * p[2][i3]
			}
		}
	}

	for i := 0; i < 18; i++ {
		fmt.Println(float64(r[i]) / 1000000.0)
	}
}
