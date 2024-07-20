# C - Structures, typedef

## Résumé:

En langage C, les structures ('struct') et typedef sont des fonctionnalités importantes pour organiser et manipuler des données de manière plus complexe et abstraite.

1. Structures (struct) :

 * Une structure est une manière de regrouper différents types de données sous un seul nom.
 * Elle permet de créer un nouveau type de données personnalisé composé de plusieurs champs ayant des types différents.

Exemple :

```bash
struct Point {
    int x;
    int y;
};
```

 * Un objet de type 'struct Point' peut stocker des coordonnées x et y.

2. Typedef :

 * 'typedef' est utilisé pour créer des alias pour des types de données existants, simplifiant ainsi leur utilisation.
 * Il permet de définir un nouveau nom (alias) pour un type de données existant.

Exemple :

```bash
typedef struct Point Point;
```

 * Cela crée un alias 'Point' pour le type de données 'struct Point'.

En résumé, les structures en C permettent de regrouper différentes variables sous un même nom, tandis que 'typedef' simplifie l'utilisation de types de données en créant des alias. En combinant les deux, on peut créer des structures nommées de manière plus concise et expressive

## Resources:
* [0x0d. Structures.pdf](https://holbertonintranet.s3.amazonaws.com/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20221105%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221105T121658Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=390d6d8ed1866baa64876e8d110b656242001f3f9e292ac58251ac93848be985)
* [Struct (C Programming Language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
* [Documentation: Structures](https://github.com/alx-tools/Betty/wiki/Documentation:-Data-structures)
* [0x0d. Typedef And Structures.pdf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20231115%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20231115T175623Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=6ed4f2edf0ebe813ae63b45a21cee86d0cf9f415ac9f2d3a8882c10606cdc648)
* [Typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
* Programming In C By Stephen Kochan - Chapter 8, Working With Structures p163-189
* [The Lost Art of C Structure Packing (Advanced - not mandatory)](http://www.catb.org/esr/structure-packing/)

## Requirements:

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are printf, malloc, free and exit.
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* Don’t forget to push your header file
* All your header files should be include guarded

## TASKS: 

### 0. Poppy
Define a new type struct dog with the following elements:

* name, type = char *
* age, type = float
* owner, type = char *

```bash
khadija@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c

#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}

khadija@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
khadija@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Poppy, and I am 3.5 :) - Woof!
```

### 1. A dog is the only thing on earth that loves you more than you love yourself

Write a function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

```bash
khadija@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c

#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}

khadija@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
khadija@ubuntu:~/0x0d. structures, typedef$ ./b 
My name is Poppy, and I am 3.5 :) - Woof!
```

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Write a function that prints a struct dog

* Prototype: void print_dog(struct dog *d);
* Format: see example bellow
* You are allowed to use the standard library
* If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
* If d is NULL print nothing.

```bash
khadija@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c

#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}

khadija@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
khadija@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Poppy
Age: 3.500000
Owner: Bob
```

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

Define a new type dog_t as a new name for the type struct dog.

```bash
khadija@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c

#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}

khadija@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
khadija@ubuntu:~/0x0d. structures, typedef$ ./d 
My name is Poppy, and I am 3.5 :) - Woof!
```

### 4. A door is what a dog is perpetually on the wrong side of

Write a function that creates a new dog.

* Prototype: dog_t *new_dog(char *name, float age, char *owner);
* You have to store a copy of name and owner
* Return NULL if the function fails

```bash
khadija@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c

#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}

khadija@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e
khadija@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Poppy, and I am 3.5 :) - Woof!
```

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

Write a function that frees dogs.

* Prototype: void free_dog(dog_t *d);

```bash
khadija@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c

#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}

khadija@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f
khadija@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Poppy, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```