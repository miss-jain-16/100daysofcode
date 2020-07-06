package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
	//create read object
)

func main() {
	// var myString string
	// fmt.Scanln(&myString)
	// fmt.Println(myString)

	// var name string = "megha"
	// fmt.Println(name)

	// var a, _ = fmt.Println(name)
	// fmt.Println(a)

	// reader := bufio.NewReader(os.Stdin)
	// fmt.Print("Enter your full name:")
	// myname, _ := reader.ReadString('\n')
	// fmt.Println(myname)

	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter your rating:")
	myRating, _ := reader.ReadString('\n')
	mynumRating, _ := strconv.ParseFloat(strings.TrimSpace(myRating), 64)
	fmt.Println(mynumRating + 2)

}
