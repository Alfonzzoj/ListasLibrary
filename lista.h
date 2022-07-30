#ifndef _LIBRERIA
#define _LIBRERIA

typedef struct node
{
  char name[20];
  int value;
  struct node *next;
} Node;

// New_item: Crea un nuevo elemento a partir del nombre y un valor
Node *new_item(char *name, int value);
// add_front: añade newp al frente de listp y retorna la nueva lista
Node *add_front(Node *listp, Node *newp);
// add_end añade newp al final de la listp y retorna la nueva lista
Node *add_end(Node *listp, Node *newp);
// insert: inserta newp ordenado en listp y retorna la nueva lista
Node *insert(Node *listp, Node *newp);
//lookup: busca un nombre en listp
Node *lookup(Node *listp, char *name);
// in_counter: cuenta los elementos en listp
int in_counter(Node *listp);
// print: muestra los elementos en listp
void print(Node *listp);
// free_all: libera todos los elementos de listp
Node *free_all(Node *listp);
// del_item: elimina la primera ocurrencia de name y retorna la nueva lista
Node *del_item(Node *listp, char *name);
// is_empty: retorna 1 si esta vacia 0 en caso contrario
int is_empty(Node *listp);
// reverse: invierte la lista 
Node *reverse(Node *listp);
//  copy: copia la lista dentro de otra
Node *copy(Node *listp);
// conc : concatena la lista 
Node *conc(Node *listp, Node *listp2);
// pausar: detiene la pantalla 
void pausar();

#include  "lista.c"
#endif
