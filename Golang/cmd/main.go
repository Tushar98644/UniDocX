package main

import (
	"fmt"
	"log"

	"github.com/Tushar98644/UniDocx/Golang/functions"
)

func main(){
	fmt.Println("This is the start of the program");

	division,multiplication,err := functions.Opertion(11,0);
	if err!= nil{
		fmt.Println(err.Error());
		log.Fatal();
	}
	fmt.Printf("The divission is %v and the multipliacation is %v", division,multiplication);
}