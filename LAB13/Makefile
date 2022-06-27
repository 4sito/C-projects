CC = gcc

%.o: %.c
	${CC} -c $< -o $@

main: tree.o main.c
	${CC} tree.o main.c -lm -o $@

clear:
	rm *.o main