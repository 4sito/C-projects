CC = gcc

ODIR = obj
_OBJ = string_manip.o trova_parola.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

CFLAGS = -Wall -pedantic -Wextra 


compile: $(OBJ)
	$(CC) $(OBJ) -o trova $(CFLAGS)


$(ODIR)/%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f trova $(ODIR)/*.o
