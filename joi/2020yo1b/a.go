package main

import (
	"fmt"
	"sort"
)

func main() {
	abc := make([]int, 3)
	fmt.Scan(&abc[0], &abc[1], &abc[2])

	sort.Slice(abc, func (i, j int) bool {
		return abc[j] < abc[i]
	})

	fmt.Println(abc[0] + abc[1])
}
