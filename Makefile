all: explode

explode: main.c lab1.o
	$(CC) -o explode main.c lab1.o

lab1.o: lab1.c
	$(CC) -c lab1.c -o lab1.o
	
clear:
	rm -f *.0
	@echo "All clean!"