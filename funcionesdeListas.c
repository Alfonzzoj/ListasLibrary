
#include "lista.h"
/*
 * ===================================================New_item: Crea un nuevo elemento a partir del nombre y un valor
*/
Node *new_item(char *name, int value)
{
    Node *newp;
    if ((newp = (Node *)malloc(sizeof(Node))) == NULL)
    {
        fprintf(stderr, "new_item: error en malloc\n");
        exit(1);
    }
    strcpy(newp->name, name);
    newp->value = value;
    newp->next = NULL;
    printf("+Nuevo item creado  \n");
    pausar();
    return newp;
}
/*
 * ===================================================add_front: añade newp al frente de listp
*/
Node *add_front(Node *listp, Node *newp)
{
    newp->next = listp;
    printf("+Item agregado al inicio  \n");
    pausar();
    return newp;
}

/*
 * ===================================================add_end añade newp al final de la listp
*/
Node *add_end(Node *listp, Node *newp)
{
    Node *p;
    if (listp == NULL)
        return newp;
    for (p = listp; p->next != NULL; p = p->next)
        ;
    p->next = newp;
    printf("+Item agregado al final   \n");
    pausar();

    return listp;
}
/*
 * ===================================================Pausa brevemente la pantalla
*/
void pausar()
{
    printf("Pulsa una letra para continuar \n");
    char a = getchar();
}
/*
 * ===================================================insert: inserta newp ordenado en listp y retorna la nueva lista
 */
Node *insert(Node *listp, Node *newp)
{
    Node *p, *prev = NULL;
    for (p = listp; p != NULL && strcmp(p->name, newp->name) < 0; p = p->next)
        prev = p;
    newp->next = p;
    if (prev == NULL) //si el elemento iba al principio
        return newp;
    prev->next = newp;
    return listp;
}
/*
 * ===================================================lookup: busca un nombre en listp
 */
Node *lookup(Node *listp, char *name)
{
    for (; listp != NULL; listp = listp->next)
        if (strcmp(name, listp->name) == 0)
            return listp;
    return NULL; /* No se encontro */
}
/*
 * ===================================================in_counter: cuenta los elementos en listp
 */
int in_counter(Node *listp)
{
    int n = 0;
    for (; listp != NULL; listp = listp->next)
        n++;
    return n;
}
/*
 * ===================================================del_item: elimina la primera ocurrencia de name
 */
Node *del_item(Node *listp, char *name)
{
    Node *p, *prev = NULL;
    for (p = listp; p != NULL; p = p->next)
    {
        if (strcmp(p->name, name) == 0)
        {
            if (prev == NULL)
                listp = p->next;
            else
                prev->next = p->next;
            free(p);
            return listp;
        }
        prev = p;
    }
    return listp; /* name no esta en la lista */
}
/*
 * ===================================================is_empty: retorna 1 si esta vacia 0 en caso contrario
 */
int is_empty(Node *listp)
{
    return listp == NULL;
}
/*
 * ===================================================free_all: libera todos los elementos de listp
 */
Node *free_all(Node *listp)
{
    Node *next;
    for (; listp != NULL; listp = next)
    {
        next = listp->next;
        free(listp);
    }
    return NULL;
}
/*
 * ===================================================print: muestra los elementos en listp
*/
void print(Node *listp)
{
    printf("-->");
    for (; listp != NULL; listp = listp->next)
        printf("%s:%d-->", listp->name, listp->value);
    printf("NULL\n");
    pausar();
}
/*
 * ===================================================reverse: invierte la lista 
*/
Node *reverse(Node *listp)
{
    Node *p = NULL, *p1 = NULL, *p2 = NULL;
    if (listp == NULL)
        return listp;
    while (listp != NULL)
    {
        p = listp;
        p1 = listp->next;
        listp->next = p2;
        listp = p1;
        p2 = p;
    }
    printf("Lista invertida \n");
    pausar();

    return p;
}
/*
 * ===================================================copy: copia una lista en otra 
*/
Node *copy(Node *listp)
{
    Node *lista = NULL, *newp = NULL;
    if (listp == NULL)
        return NULL;
    for (; listp != NULL; listp = listp->next)
    {
        newp = new_item("", 0);
        strcpy(newp->name, listp->name);
        newp->value = listp->value;
        lista = add_end(lista, newp);
    }
    printf("Lista copiada  \n");
    pausar();

    return lista;
}
/*
 * ===================================================conc: une o concatena 2 listas 
*/
Node *conc(Node *listp, Node *listp2)
{
    Node *listp3 = NULL, *p;
    if ((listp == NULL) && (listp2 == NULL))
        return listp3;
    if (listp == NULL)
    {
        listp3 = copy(listp2);
        return listp3;
    }
    listp3 = copy(listp);
    for (p = listp3; p->next != NULL; p = p->next)
        ;
    p->next = listp2;
    printf("Listas concatenadas  \n");
    pausar();

    return listp3;
}
