package map_loop

import "fmt"


func Maps(){
	var myMap = map[string]uint8{"Age":21};
	myMap["Age"] = 22;
	height,ok := myMap["Height"]
	if ok {
		fmt.Println("The height is:",height);
	} else {
		fmt.Println("The height is not present in the map.");
	}

	// delete the key value pair
	delete(myMap,"Age");
}

func Loops(){
	var myMap = map[string]uint8{"Age":21,"Height":5};
	for key,value := range myMap {
		fmt.Printf("The key is %v and the value is %v \n",key,value);
	}

    // while loop
	var i int = 0;
	for i < 2 {
		fmt.Println("The value of i is:",i);
		i++;
	}

	// for loop
	for i := 0; i < 2; i++ {
		fmt.Println("The value of i is:",i);
	}
}
