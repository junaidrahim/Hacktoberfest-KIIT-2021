package main

import (
	"fmt"
	"log"
	"net"
	"bufio"
	"strings"
)

func main(){
	listener, err := net.Listen("tcp",":8080")

	if err != nil {
		log.Fatal(err)
	}

	defer listener.Close()

	for {
		connection, err := listener.Accept()
		
		if err != nil {
			log.Fatal(err)
		}

		go handle(connection);
	}
		
}

func handle(connection net.Conn){
	defer connection.Close()

	request(connection)
}

func request(connection net.Conn){
	scanner := bufio.NewScanner(connection)
	i := 0

	for scanner.Scan() {
		ln := scanner.Text()
		if i==0 {
			mux(connection, ln)
		}

		if ln=="" {
			break
		}

		i++
	}
}

func mux(connection net.Conn, ln string){
	method := strings.Fields(ln)[0]
	uri := strings.Fields(ln)[1]

	fmt.Println("Method ", method)
	fmt.Println("URI", uri)

	if method=="GET" && uri=="/"{
		respond(connection, "Home")
	}

	if method=="GET" && uri=="/about" {
		respond(connection, "About")
	}
}

func respond(connection net.Conn, data string) {
	body := fmt.Sprintf("<h1> %s </h1>", data)
	fmt.Fprint(connection, "HTTP/1.1 200 OK\r\n")
	fmt.Fprintf(connection, "Content-Length: %d\r\n", len(body))
	fmt.Fprintf(connection, "Content-Type: text/html\r\n")
	fmt.Fprintf(connection, "\r\n")
	fmt.Fprintf(connection, body)
}