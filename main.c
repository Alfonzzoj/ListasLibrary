#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"


int op=1, valor;
char nombre[20];
Node *newp, *listp, *listp2, *listp3;

// Ejemplo de progragama principal para usar la lista

int menu(){
      int op;
      system("clear");
      printf("===    SISTEMA  DE    LISTAS   === \n\n");
      printf("Introduzca la accion a realizar \n");
      printf("1:= Anadir un elemento al inicio \n");
      printf("2:= Anadir un elemento al final \n");
      printf("3:= Invertir la Lista \n");
      printf("4:= Copiar la lista a una nueva \n");
      printf("5:= Imprimir la lista \n");
      printf("6:= Imprimir la lista copiada\n");
      printf("7:= Concatenar las dos listas\n");
      printf("0:= Salir \n \n");
      scanf("%d", &op);
      return op;
}
int main()
{
   while (op != 0)
   {
      op = menu();

      switch (op)
      {
      case 1:
         printf("Introduzca el nombre \n");
         scanf("%s", nombre);
         printf("Introduzca el valor \n");
         scanf("%d", &valor);
         newp = new_item(nombre, valor);
         listp = add_front(listp, newp);
         break;
      case 2:
         printf("Introduzca el nombre \n");
         scanf("%s", nombre);
         printf("Introduzca el valor \n");
         scanf("%d", &valor);
         newp = new_item(nombre, valor);
         listp = add_end(listp, newp);
         break;
      case 3:
         listp = reverse(listp);
         break;

      case 4:
         listp2 = copy(listp);
         break;

      case 5:
         print(listp);
         pausar();
         break;

      case 6:
         print(listp2);
         break;
      case 7:
         listp3 = conc(listp, listp2);
         print(listp3);
         break;
      }
   }
   return 0;
}
