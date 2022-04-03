package main

import "fmt"

func main() {
    var x string = "Hello World"

    for i := 0; i < len(x); i++ {
        fmt.Println(i)
    }
}
