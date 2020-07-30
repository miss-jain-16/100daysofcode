package main

import (
	"fmt"
	"runtime"
)

func main() {
	// runtime.NumCPU() + 1==>expression
	// statement==>println
	fmt.Println(runtime.NumCPU() + 1)
}
