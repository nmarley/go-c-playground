package main

import "C"
import "fmt"

// SayHello says hello
//export SayHello
func SayHello(name *C.char) {
	fmt.Printf("Nautilus says: Hello, %s!\n", C.GoString(name))
}

// SayBye says bye
//export SayBye
func SayBye() {
	fmt.Println("Nautilus says: Bye!")
}

func main() {
	// We need the main function to enable
	// CGO compiler to compile the package as a C library.
}
