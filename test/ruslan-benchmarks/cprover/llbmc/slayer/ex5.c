/* #include <stdlib.h> */

typedef struct cell cell;

struct cell {
    int car;
    cell* cdr;
};

int main()
{
    cell *x = (cell*) malloc(sizeof(cell));
    x->car = 42;
    x->cdr = 0;
    free(x);
    return 0;
}
