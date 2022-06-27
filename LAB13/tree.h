struct btree {
    int valore;
    struct btree *leftPtr;
    struct btree *rightPtr;
};

typedef struct btree BTree;

void init(BTree **ptrPtr);
int isempty(BTree *ptr);
int search_rec(BTree *ptr, int val);
void print_scheme(BTree *ptr);
void print_rec(BTree *ptr);

//DA IMPLEMENTARE
BTree* ordinsert_rec(BTree *ptr, int val);

int min(BTree* ptrPtr);
unsigned int size(BTree *ptrPtr);
void delete_pos(BTree **ptrPtr, unsigned int pos);
