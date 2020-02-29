CC = g++
EXEC = Rpg1v1
FLAGS = -std=c++11 -Wall -Werror -pedantic
LIBS = 

all: main.o Personnage.o Arme.o
	$(CC) main.o Personnage.o Arme.o -o $(EXEC) $(LIBS)

main.o: Personnage.o
	$(CC) main.cpp -c $(FLAGS)
	
Personnage.o: Arme.o
	$(CC) Personnage.cpp -c $(FLAGS)
	
Arme.o:
	$(CC) Arme.cpp -c $(FLAGS)
	
clean:
	rm *.o
	rm $(EXEC)
