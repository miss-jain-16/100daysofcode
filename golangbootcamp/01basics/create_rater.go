package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
	"time"
)

func main() {
	var name string
	var userRating string

	// front end
	reader := bufio.NewReader(os.Stdin)
	fmt.Println("PLEASE ENTER YOUR FULL NAME")
	name, _ = reader.ReadString('\n')

	reader = bufio.NewReader(os.Stdin)
	fmt.Println("Please rate our DOSA")
	userRating, _ = reader.ReadString('\n')
	mynumRating, _ := strconv.ParseFloat(strings.TrimSpace(userRating), 64)

	fmt.Printf("%v ,%v", name, mynumRating)

	fmt.Printf("Hello %v,\n Thanks for rating our dosa center with %v start rating.\n\n Your rating was recorded in our system at %v ", name, mynumRating, time.Now().Format(time.Stamp))
	if mynumRating == 5 {
		fmt.Println("Bonus for team for 5 start rating")
	} else if mynumRating == 4 || mynumRating == 3 {
		fmt.Println("We are always improving")
	} else if mynumRating < 3 {
		fmt.Println("Need Serious work on our side")
	}

}
