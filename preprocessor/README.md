# C - Preprocessor

## Résumé:
* Le préprocesseur est un programme qui analyse votre code source et y effectue des modifications avant la compilation.
* L'instruction de préprocesseur #include insère le contenu d'un autre fichier.
* L'instruction #define définit une constante de préprocesseur. Elle permet de remplacer un mot-clé par une valeur dans le code source.
* Les macros sont des morceaux de code tout prêts définis à l'aide d'un #define  . Ils peuvent accepter des paramètres.
* Il est possible d'écrire des conditions en langage préprocesseur pour choisir ce qui sera compilé. On utilise notamment les mots-clés #if  , #elif et #endif  .
* Pour éviter qu'un fichier .h ne soit inclus un nombre infini de fois, on le protège à l'aide d'une combinaison de constantes de préprocesseur et de conditions. Tous vos futurs fichiers .h devront être protégés de cette manière.

## Resources:
* [Understanding C Program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
* [Object-Like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
* [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
* [Pre Processor Directives In C](https://www.youtube.com/watch?v=X6HiYbY3Uak)
* [The C Preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html)
* [Standard Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)
* [Include Guard](https://en.wikipedia.org/wiki/Include_guard)
* [Common Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)


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
* Don’t forget to push your header file
* All your header files should be include guarded

## TASKS: 

### 0. Object-like Macro
Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

```bash
khadija@ubuntu:~/0x0c. macro, structures$ cat 0-main.c

#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}

khadija@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
khadija@ubuntu:~/0x0c. macro, structures$ ./a 
1122
```

### 1. Pi
Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359

```bash
khadija@ubuntu:~/0x0c. macro, structures$ cat 1-main.c

#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}

khadija@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
khadija@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
```

### 2. File name
Write a program that prints the name of the file it was compiled from, followed by a new line.

* You are allowed to use the standard library

```bash
khadija@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
khadija@ubuntu:~/0x0c. macro, structures$ ./c 
2-main.c
khadija@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
khadija@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
khadija@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
```

### 3. Function-like macro
Write a function-like macro ABS(x) that computes the absolute value of a number x.

```bash
khadija@ubuntu:~/0x0c. macro, structures$ cat 3-main.c

#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}

khadija@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
khadija@ubuntu:~/0x0c. macro, structures$ ./d 
980, 980
```

/**
  *Dans cette macro, ABS(x) renvoie la valeur absolue de x.
  *Elle utilise une expression conditionnelle pour vérifier 
  *si x est supérieur ou égal à zéro. 
  *Si c'est le cas, il renvoie simplement x, sinon, il renvoie -x
  */

### 4. SUM
Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.

```bash
khadija@ubuntu:~/0x0c. macro, structures$ cat 4-main.c

#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}

khadija@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
khadija@ubuntu:~/0x0c. macro, structures$ ./e 
1122
```

/**
 *#ifndef SUM_H  /*Si SUM_H n'est pas défini (évite la double *inclusion)*/
 *#define SUM_H  /*Définit SUM_H pour indiquer que l'en-tête *est inclus*/
 *#define SUM(x, y) ((x) + (y))  /*Macro qui retourne la *  *somme de x et y*/
 *
 *#endif  /*Fin de la garde d'inclusion*/
 */