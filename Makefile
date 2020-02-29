CC = g++
EXEC = Rpg1v1
FLAGS = -std=c++11 -Wall -Werror -pedantic
LIBS = 
O = obj
S = src
B = bin

all: $(O) $(B) $(O)/main.o $(O)/Personnage.o $(O)/Arme.o
	$(CC) $(O)/main.o $(O)/Personnage.o $(O)/Arme.o -o $(B)/$(EXEC) $(LIBS)

$(O)/main.o: $(O)/Personnage.o
	$(CC) $(S)/main.cpp -c -o $(O)/main.o $(FLAGS)
	
$(O)/Personnage.o: $(O)/Arme.o
	$(CC) $(S)/Personnage.cpp -c -o $(O)/Personnage.o $(FLAGS)
	
$(O)/Arme.o:
	$(CC) $(S)/Arme.cpp -c -o $(O)/Arme.o $(FLAGS)

$(O): 
	mkdir $(O)

$(B):
	mkdir $(B)

clean:
	rm $(O)/*.o
	rm $(B)/$(EXEC)
