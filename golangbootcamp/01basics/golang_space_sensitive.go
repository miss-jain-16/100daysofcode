package main

import (
	"fmt"
)

func main() {
	var isLoggedIn bool = true
	var balance int = 10

	if isLoggedIn && balance > 5 {
		fmt.Println("show cart page")
		var len, err = fmt.Println("show cart page")
		if err == nil {
			fmt.Printf("lenght is %v ,%T\n", len, len)
		}
	} else {
		fmt.Println("show user loggin page")
	}
}
