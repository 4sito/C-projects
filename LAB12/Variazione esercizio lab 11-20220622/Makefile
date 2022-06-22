CC = gcc

%.o: %.c
	${CC} -c $< -o $@

test_lista: lista.o main_lista.c
	${CC} lista.o main_lista.c -o $@

clear:
	rm *.o test_*