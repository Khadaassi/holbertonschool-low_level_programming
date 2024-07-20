# C - Bit manipulation

![Bit manipulation](https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/232/bitwise.PNG)

* [Résumé](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/bit_manipulation#r%C3%A9sum%C3%A9)
* [Resources](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/bit_manipulation#resources)
* [Requirements](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/bit_manipulation#requirements)
* [TASKS](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/bit_manipulation#tasks)
    * [0. 0](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/bit_manipulation#0-0)
    * [1. 1](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/bit_manipulation#1-1)
    * [2. 10](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/bit_manipulation#2-10)
    * [3. 11](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/bit_manipulation#3-11)
    * [4. 100](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/bit_manipulation#4-100)
    * [5. 101](https://github.com/khadaassi/holbertonschool-low_level_programming/tree/main/bit_manipulation#5-101)

## Résumé:

La manipulation de bits est le processus de modification de bits individuels dans une valeur stockée en mémoire. En C, cette technique est réalisée à l'aide d'opérations bit à bit, notamment les opérations ET, OU, XOR, NOT, et les décalages.

Opérations Bit à Bit:

* & (et): Met chaque bit du résultat à 1 si les bits correspondants dans les opérandes sont tous les deux à 1.
* | (ou): Met chaque bit du résultat à 1 si l'un des bits correspondants dans les opérandes est à 1.
* ^ (xor): Met chaque bit du résultat à 1 si exactement un des bits correspondants dans les opérandes est à 1.
* ~ (non): Inverse chaque bit de l'opérande.
* << (décalage gauche): Décale chaque bit de l'opérande vers la gauche par un nombre spécifié de positions.
* >> (décalage droit): Décale chaque bit de l'opérande vers la droite par un nombre spécifié de positions.

Résumé Bref sur la Manipulation de Bits en C:

La manipulation de bits en C implique des opérations bit à bit telles que ET, OU, XOR, NOT, et les décalages. Elle permet de modifier des bits individuels dans une valeur stockée en mémoire. Le masquage bit à bit utilise des masques de bits pour effectuer des modifications spécifiques. Les champs de bits en C permettent de définir des variables avec des longueurs de bits spécifiques. Bien que puissante, la manipulation de bits nécessite une compréhension approfondie pour éviter des erreurs.



## Resources:
* [Google](https://intranet.hbtn.io/rltoken/K6QcR1Dp4e5u67E586ooiA)
* [Youtube](https://intranet.hbtn.io/rltoken/cdSMJd0abHiCWCYwt6_Dmw)

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
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file
* All your header files should be include guarded

## TASKS: 

### 0. 0

Write a function that converts a binary number to an unsigned int.

* Prototype: unsigned int binary_to_uint(const char *b);
* where b is pointing to a string of 0 and 1 chars
* Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL

```bash
julien@ubuntu:~/Binary$ cat 0-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/Binary$ ./a 
1
5
0
98
402
julien@ubuntu:~/Binary$ 
```

### 1. 1

Write a function that prints the binary representation of a number.

* Prototype: void print_binary(unsigned long int n);
* Format: see example
* You are not allowed to use arrays
* You are not allowed to use malloc
* You are not allowed to use the % or / operators

```bash
julien@ubuntu:~/Binary$ cat 1-main.c 
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
julien@ubuntu:~/Binary$ ./b 
0
1
1100010
10000000000
10000000001
julien@ubuntu:~/Binary$ 
```

### 2. 10

Write a function that returns the value of a bit at a given index.

* Prototype: int get_bit(unsigned long int n, unsigned int index);
* where index is the index, starting from 0 of the bit you want to get
* Returns: the value of the bit at index index or -1 if an error occured

```bash
julien@ubuntu:~/Binary$ cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c    
julien@ubuntu:~/Binary$ ./c
1
1
0
julien@ubuntu:~/Binary$
```
### 3. 11

Write a function that sets the value of a bit to 1 at a given index.

* Prototype: int set_bit(unsigned long int *n, unsigned int index);
* where index is the index, starting from 0 of the bit you want to set
* Returns: 1 if it worked, or -1 if an error occurred

```bash
julien@ubuntu:~/Binary$ cat 3-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
julien@ubuntu:~/Binary$ ./d
1056
1024
99
julien@ubuntu:~/Binary$ 
```

### 4. 100

Write a function that sets the value of a bit to 0 at a given index.

* Prototype: int clear_bit(unsigned long int *n, unsigned int index);
* where index is the index, starting from 0 of the bit you want to set
* Returns: 1 if it worked, or -1 if an error occurred

```bash
julien@ubuntu:~/Binary$ cat 4-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
julien@ubuntu:~/Binary$ ./e
0
0
96
julien@ubuntu:~/Binary$
```

### 5. 101

Write a function that returns the number of bits you would need to flip to get from one number to another.

* Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
* You are not allowed to use the % or / operators

```bash
julien@ubuntu:~/Binary$ cat 5-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
julien@ubuntu:~/Binary$ ./f
2
5
3
1
julien@ubuntu:~/Binary$ 
```