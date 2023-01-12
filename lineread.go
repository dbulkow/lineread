package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
)

func main() {
	log.SetFlags(0)

	file, err := os.Open("lineread.go")
	if err != nil {
		log.Fatal(err)
	}
	defer file.Close()

	scanner := bufio.NewScanner(file)
	for scanner.Scan() {
		fmt.Println(scanner.Text())
	}
	if err := scanner.Err(); err != nil {
		log.Println("reading lines", err)
	}
}
