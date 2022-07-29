# Listas .h

*Libreria de listas implementadas en C.*

## Estructura de el nodo de la lista 
```c
typedef struct node
{
	char name[20];
	int value;
	struct node *next;
} Node;
```
![Estructura d enodo](https://i.ibb.co/4N9vcVG/Diagrama-en-blanco.png)
Dividiendose este en 

 - **Nombre:** Elemento de tipo char[20] para guardar cadenas de texto
 - **Valor:** Elemento de tipo int, para guardar numeros 
 - **Next:** Direccion del proximo nodo 

```mermaid
graph LR
A[nombre:valor ] -->B[char 20 => nombre ]
A --> C[int => valor ]
```
## Funciones que puede realizar 

### 1.  Anadir un elemento al inicio
*Agrega un elemento justo al inicio de la lista*

Antes 
```mermaid
graph LR
A[Elemento 1 ] --> B[Elemento 2]
```

Despues 
```mermaid
graph LR
C[Elemento nuevo]--> A[Elemento 1 ] --> B[Elemento 2]
```
 
### 2. Anadir un elemento al final

*Agrega un elemento justo al final de la lista*

Antes 
```mermaid
graph LR
A[Elemento 1 ] --> B[Elemento 2]
```

Despues 
```mermaid
graph LR
A[Elemento 1 ] --> B[Elemento 2] --> C[Elemento nuevo]
```

### 3. Invertir la Lista
*Invierte la direccion en la que apuntan los elementos d ela lista *

Antes 
```mermaid
graph LR
A[Elemento 1 ] --> B[Elemento 2] --> C[Elemento 3]
```

Despues 
```mermaid
graph LR
A[Elemento 1]
B[Elemento 2]
C[Elemento 3] -->B -->A
```

### 4. Copiar la lista a una nueva
*Permite crear una nueva lista apartir de otra*

Antes 

 - Lista 1:

```mermaid
graph LR
A[Elemento 1 ] --> B[Elemento 2] --> C[Elemento 3]
```

Despues 
 - Lista 1:

```mermaid
graph LR
A[Elemento 1 ] --> B[Elemento 2] --> C[Elemento 3]
```
 - Lista 2:

```mermaid
graph LR
A[Elemento 1 ] --> B[Elemento 2] --> C[Elemento 3]
```
### 5. Imprimir la lista
*Permite leer los lementos de la lista en consola*

Teniendo 
```mermaid
graph LR
A[Elemento 1 ] --> B[Elemento 2] --> C[Elemento 3]
```
Salida en consola
```bash
Elemento 1:Valor1 --> Elemento 2:Valor2 --> Elemento 3:Valor3
```
### 6. Concatenar las dos listas
*Permite unir 2 listas* 
Antes 


 - Lista 1:

```mermaid
graph LR
A[Elemento 1 ] --> B[Elemento 2] 
```
 - Lista 2:

```mermaid
graph LR
A[Elemento 3 ] --> B[Elemento 4] --> C[Elemento 5]
```
Despues
 - Lista resultante:

```mermaid
graph LR
A[Elemento 1] --> B[Elemento 2] --> C[Elemento 3] --> D[Elemento 4] --> E[Elemento 5]
```
---
### Otras funciones de las que dispone


```c   
in_counter(Node *listp): Cuenta el numero de 
nodos de una lista 
``` 
```c   
free_all(Node *listp): libera la memoria de una lista 
``` 
```c   
del_item(Node *listp, char *name): elimina la primera 
ocurrencia de name y retorna la nueva lista
``` 
```c   
is_empty(Node *listp): retorna 1 si esta vacia, 
0 en caso contrario
``` 

 
