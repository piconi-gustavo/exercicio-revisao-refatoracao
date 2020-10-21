all:
	g++ -Wall -std=c++11 Empregado.cpp -c -o Empregado.o
	g++ -Wall -std=c++11 Engenheiro.cpp -c -o Engenheiro.o
	g++ -Wall -std=c++11 Vendedor.cpp -c -o Vendedor.o
	g++ -Wall -std=c++11 main.cpp -c -o main.o
	g++ -Wall -std=c++11 -o main main.o Empregado.o Engenheiro.o Vendedor.o

run:
	./main

clean:
	rm *.o
