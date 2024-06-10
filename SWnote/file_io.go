package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	file, err := os.Open("config.txt")
	if err != nil {
		fmt.Println("Error reading file:", err)
	}

	scanner := bufio.NewScanner(file)
	for scanner.Scan() {
		fmt.Println(scanner.Text())
	}
	if err := scanner.Err(); err != nil {
		fmt.Println("Error reading file:", err)
	}

	fmt.Println("All job done!")
}
