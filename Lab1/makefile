all: laberinto.o buscador.o

laberinto.o: laberinto.c
			gcc -Wall laberinto.c -o laberinto.o
			./laberinto.o

buscador.o: buscador.c
			gcc -Wall buscador.c -o buscador.o
			./buscador.o

clean:
		rm -f *.o
		rm -r Laberinto/