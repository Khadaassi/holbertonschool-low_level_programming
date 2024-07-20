# C - Singly linked lists

![Singly linked lists](https://user.oc-static.com/upload/2021/12/09/16390600060908_p3c1-3.png)

* [Résumé](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/singly_linked_lists#r%C3%A9sum%C3%A9)
* [Resources](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/singly_linked_lists#resources)
* [Requirements](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/singly_linked_lists#requirements)
* [More Info](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/singly_linked_lists#more-info)
* [TASKS](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/singly_linked_lists#tasks)
    * [0. Print list](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/singly_linked_lists#0-print-list)
    * [1. List length](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/singly_linked_lists#1-list-length)
    * [2. Add node](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/singly_linked_lists#2-add-node)
    * [3. Add node at the end](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/singly_linked_lists#3-add-node-at-the-end)
    * [4. Free list](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/singly_linked_lists#4-free-list)


## Résumé:

création et l'affichage d'une liste chaînée simple. Voici un résumé plus complet et simplifié :

* Création de la structure Node :
    * La structure Node représente un nœud dans la liste chaînée.
    * Chaque nœud contient un champ pour stocker une valeur (data) et un pointeur vers le nœud suivant (next).

* Fonction createNode :
    * La fonction createNode alloue dynamiquement un nouveau nœud et initialise ses champs avec une valeur donnée.
    * En cas d'échec de l'allocation mémoire, le programme affiche un message d'erreur.

* Fonction displayList :
    * La fonction displayList parcourt la liste chaînée à partir du premier nœud et affiche les valeurs de chaque nœud.
    * La séquence est affichée jusqu'à ce qu'on atteigne le dernier nœud, indiqué par un pointeur nul (NULL).

* Fonction main :
    * La fonction principale crée trois nœuds (node1, node2, node3) avec des valeurs différentes.
    * Les nœuds sont liés entre eux pour former une liste chaînée.
    * La fonction displayList est appelée pour afficher la séquence de nœuds.

* Libération de la mémoire :
    * La mémoire allouée dynamiquement pour chaque nœud est libérée à la fin du programme à l'aide de la fonction free.


En résumé, ce programme démontre comment créer, afficher et libérer une liste chaînée simple en utilisant des structures et des fonctions en langage C. La liste est composée de nœuds liés, chaque nœud contenant une valeur entière.


## Resources:

* [Linked Lists](https://intranet.hbtn.io/rltoken/cg9u72K8oC40BifREzmx0g)
* [Google](https://intranet.hbtn.io/rltoken/cOmrDflypepm1-sgGIXjNA)
* [Youtube](https://intranet.hbtn.io/rltoken/6CP1oqEpl5hd1j18fusEEQ)

## Requirements:

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
* Don’t forget to push your header file
* All your header files should be include guarded

## More Info
Please use this data structure for this project:

```bash
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## TASKS: 

### 0. Print list

Write a function that prints all the elements of a list_t list.

* Prototype: size_t print_list(const list_t *h);
* Return: the number of nodes
* Format: see example
* If str is NULL, print [0] (nil)
* You are allowed to use printf

```bash
julien@ubuntu:~/Singly linked lists$ cat 0-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
julien@ubuntu:~/Singly linked lists$ ./a 
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
julien@ubuntu:~/Singly linked lists$ 
```

### 1. List length

Write a function that returns the number of elements in a linked list_t list.

* Prototype: size_t list_len(const list_t *h);

```bash
julien@ubuntu:~/Singly linked lists$ cat 1-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->str);
    free(new);
    return (0);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
julien@ubuntu:~/Singly linked lists$ ./b 
-> 2 elements
julien@ubuntu:~/Singly linked lists$ 
```

### 2. Add node

Write a function that adds a new node at the beginning of a list_t list.

* Prototype: list_t *add_node(list_t **head, const char *str);
* Return: the address of the new element, or NULL if it failed
* str needs to be duplicated
* You are allowed to use strdup

```bash 
julien@ubuntu:~/Singly linked lists$ cat 2-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    print_list(head);
    return (0);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
julien@ubuntu:~/Singly linked lists$ ./c 
[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro
julien@ubuntu:~/Singly linked lists$ 
```

### 3. Add node at the end

Write a function that adds a new node at the end of a list_t list.

* Prototype: list_t *add_node_end(list_t **head, const char *str);
* Return: the address of the new element, or NULL if it failed
* str needs to be duplicated
* You are allowed to use strdup

```bash
julien@ubuntu:~/Singly linked lists$ cat 3-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Anne");
    add_node_end(&head, "Colton");
    add_node_end(&head, "Corbin");
    add_node_end(&head, "Daniel");
    add_node_end(&head, "Danton");
    add_node_end(&head, "David");
    add_node_end(&head, "Gary");
    add_node_end(&head, "Holden");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Jay");
    add_node_end(&head, "Jennie");
    add_node_end(&head, "Jimmy");
    add_node_end(&head, "Justin");
    add_node_end(&head, "Kalson");
    add_node_end(&head, "Kina");
    add_node_end(&head, "Matthew");
    add_node_end(&head, "Max");
    add_node_end(&head, "Michael");
    add_node_end(&head, "Ntuj");
    add_node_end(&head, "Philip");
    add_node_end(&head, "Richard");
    add_node_end(&head, "Samantha");
    add_node_end(&head, "Stuart");
    add_node_end(&head, "Swati");
    add_node_end(&head, "Timothy");
    add_node_end(&head, "Victor");
    add_node_end(&head, "Walton");
    print_list(head);
    return (0);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d
julien@ubuntu:~/Singly linked lists$ ./d 
[4] Anne
[6] Colton
[6] Corbin
[6] Daniel
[6] Danton
[5] David
[4] Gary
[6] Holden
[3] Ian
[3] Ian
[3] Jay
[6] Jennie
[5] Jimmy
[6] Justin
[6] Kalson
[4] Kina
[7] Matthew
[3] Max
[7] Michael
[4] Ntuj
[6] Philip
[7] Richard
[8] Samantha
[6] Stuart
[5] Swati
[7] Timothy
[6] Victor
[6] Walton
julien@ubuntu:~/Singly linked lists$ 
```

### 4. Free list

Write a function that frees a list_t list.

* Prototype: void free_list(list_t *head);

```bash 
julien@ubuntu:~/Singly linked lists$ cat 4-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Bob");
    add_node_end(&head, "&");
    add_node_end(&head, "Kris");
    add_node_end(&head, "love");
    add_node_end(&head, "asm");
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
julien@ubuntu:~/Singly linked lists$ valgrind ./e
==3598== Memcheck, a memory error detector
==3598== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3598== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3598== Command: ./e
==3598== 
[6] Bob
[1] &
[3] Kris
[4] love
[3] asm
==3598== 
==3598== HEAP SUMMARY:
==3598==     in use at exit: 0 bytes in 0 blocks
==3598==   total heap usage: 11 allocs, 11 frees, 1,166 bytes allocated
==3598== 
==3598== All heap blocks were freed -- no leaks are possible
==3598== 
==3598== For counts of detected and suppressed errors, rerun with: -v
==3598== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/Singly linked lists$
```