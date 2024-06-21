package main

import (
	"fmt"
	"log"

	"github.com/Tushar98644/UniDocx/Golang/arrays-slices"
	"github.com/Tushar98644/UniDocx/Golang/functions"
	"github.com/Tushar98644/UniDocx/Golang/maps-loops"
)

func main() {
	fmt.Println("This is the start of the program")

	// functions
	division, multiplication, err := functions.Opertion(11, 3);

	switch {
	case err != nil:
		fmt.Println(err.Error())
		log.Fatal()
	default:
		fmt.Printf("The divission is %v and the multipliacation is %v \n", division, multiplication)
	}

	// arrays and slices
	array_slice.Arrays();
	array_slice.Slice();

	// maps
	map_loop.Maps();
	map_loop.Loops();
        
}
