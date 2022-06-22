typedef struct
{
    unsigned int size;
    unsigned int capacity;
    int *data;
} Pila;

void print_pila(Pila p);
void init(Pila* p); //Inizializza pila con capacity 1 e senza nessun elemento
void push(Pila* p, int elem); //push dell'elemento elem sulla pila
int pop(Pila*);
