// Go program to illustrate
// how deadlock arises
package main

import "fmt"

// Main function
func main() {

	// Creating a channel
	// Here deadlock arises because
	// no goroutine is writing
	// to this channel so, the select
	// statement has been blocked forever

	// c := make(chan int)
	// 	select {
	// 	case <-c:
	// 	}
	// }

	// To avoid this situation we use a default case in the select statement. Or in other words, when the deadlock arises in the program, then default case of the select statement executed to avoid deadlock. As shown in the below example, we use a default case in the select statement to avoid deadlock.

	// Example:

	c := make(chan int)
	select {
	case <-c:
	default:
		fmt.Println("Daefault Case")
	}
}
