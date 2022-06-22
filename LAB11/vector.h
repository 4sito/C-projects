typedef struct
{
    unsigned int size;
    unsigned int capacity;
    int *data;
} Vector;

void print_vector(Vector v);
void init(Vector* v); //PRE: Il puntatore non è NULL
//POST: inizializza un vector con capacity 1 e senza nessun elemento.
int read(Vector v, unsigned int pos); //PRE: il vettore è inizializzato e l'intero è tra 0 e la size -1 del vettore
//POST: Restituisce il valore dell'array nella posizione corrispondente
void insert_element(Vector* v, int data, unsigned int pos); //aggiungi data in posizione pos (possibilmente modificando la capacity del vettore)
void delete_element(Vector* v, unsigned int pos); //elimina elemento in posizione pos
