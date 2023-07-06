package main

import (
	"fmt"
	"sort"
)

func main() {
	var s string
	fmt.Scan(&s)

	m := make(map[string]int)
	for i := 1; i < len(s); i++ {
		m[s[i-1:i+1]]++
	}

	keys := make([]string, len(m))
	i := 0
	for key := range m {
		keys[i] = key
		i++
	}
	sort.Sort(sort.Reverse(sort.StringSlice(keys)))

	r, max := "", 0
	for _, key := range keys {
		if max <= m[key] {
			r = key
			max = m[key]
		}
	}
	fmt.Println(r)
}
