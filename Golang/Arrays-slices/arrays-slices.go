package array_slice

import (
	"fmt"
	"unsafe"
)

func Arrays() {
	array := [3]int32{4, 5, 6}
	fmt.Println("Array :",array);
}

func Slice() {

	var slice []int32 = []int32{7, 8, 9}
	fmt.Println("Original slice:", slice)
	fmt.Printf("Length: %v, Capacity: %v\n", len(slice), cap(slice))

	// Get the address of the underlying array of the original slice
	originalArrayPointer := unsafe.SliceData(slice);
	fmt.Println("The address of the original slice:",originalArrayPointer);

	modifiedSlice := append(slice, 10)
	fmt.Println("Modified slice:", modifiedSlice)
	fmt.Printf("Length: %v, Capacity: %v\n", len(modifiedSlice), cap(modifiedSlice))

	modifiedArrayPointer := unsafe.SliceData(modifiedSlice);

	if originalArrayPointer == modifiedArrayPointer {
		fmt.Println("The same slice is returned.")
	} else {
		fmt.Println("A new modified slice is returned.")
	}

	var slice3 []int32 = make([]int32,4,8);
	fmt.Println("The 3rd slice created using make:",slice3);
	fmt.Printf("The size of the slice is %v and the capacity of the slice is %v \n", len(slice3), cap(slice3));    
}
