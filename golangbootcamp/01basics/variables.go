package main

import "fmt"

func main() {
	var batman string = "I am batman"
	fmt.Println(batman)
	var superman string = "I am superman"
	fmt.Println(superman)
	thor := "I am thor"
	fmt.Println(thor)
	thorRating := 3.
	fmt.Printf("%v,%T", thorRating, thorRating)
	var Ironman, CatAmerica string = "Iam ironman", "Iam catman"
	fmt.Println(Ironman, CatAmerica)
	var defaultValue string
	fmt.Println(defaultValue)
	// standalone varaiables
	var (
		spiderman = "I am spider"
		age       = 18
		powers    = "web slings,spidy sense"
	)
	fmt.Println(spiderman, age, powers)
}
