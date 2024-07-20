# C - Static libraries

## Résumé:

Une bibliothèque statique, également appelée bibliothèque statique ou archive statique, a généralement le format de fichier suivant :

* Extension de fichier : Le format de fichier le plus courant pour les bibliothèques statiques sur les systèmes Unix et Linux est l'extension ".a" (pour "archive"). Par exemple, une bibliothèque statique en C pourrait avoir un nom de fichier tel que "libmystaticlibrary.a".

* Format de l'archive : Les bibliothèques statiques sont généralement des archives qui regroupent un ensemble de fichiers objets (fichiers binaires compilés) en un seul fichier. Ces fichiers objets contiennent le code source précompilé des fonctions et des routines incluses dans la bibliothèque. Le format de l'archive peut varier, mais l'outil couramment utilisé pour créer et gérer ces archives sur les systèmes Unix/Linux est "ar".

* Contenu : L'archive peut contenir plusieurs fichiers objets compilés qui sont liés au programme lors de la compilation. Lorsque vous compilez un programme en utilisant une bibliothèque statique, le compilateur extrait uniquement les fichiers objets pertinents de la bibliothèque et les incorpore dans le programme final.

* Utilisation : Pour utiliser une bibliothèque statique dans un programme, vous devez spécifier le chemin vers la bibliothèque lors de la compilation et de l'édition de liens. Par exemple, avec le compilateur GCC, vous pouvez utiliser l'option "-l" suivie du nom de la bibliothèque sans l'extension ".a". Par exemple, pour utiliser la bibliothèque statique "libmystaticlibrary.a", vous utiliseriez l'option de compilation -lmystaticlibrary.

## Resources:
* [C Static Libraries](https://intranet.hbtn.io/concepts/890)
* [What Is A "C" Library ? What Is It Good For ?](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
* [Creating A Static "C" Library Using "ar" And "ranlib"](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
* [Using A "C" Library In A Program](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
* [What Is Difference Between Dynamic And Static Library (Static And Dynamic Linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)

## Requirements:

### C
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file

### Bash
* Allowed editors: vi, vim, emacs
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your files should end with a new line (why?)
* The first line of all your files should be exactly #!/bin/bash
* A README.md file, at the root of the folder of the project, describing what each script is doing
* All your files must be executable

## TASKS: 

### 0. A library is not a luxury but one of the necessities of life

Create the static library libmy.a containing all the functions listed below:

```bash
    int _putchar(char c);
    int _islower(int c);
    int _isalpha(int c);
    int _abs(int n);
    int _isupper(int c);
    int _isdigit(int c);
    int _strlen(char *s);
    void _puts(char *s);
    char *_strcpy(char *dest, char *src);
    int _atoi(char *s);
    char *_strcat(char *dest, char *src);
    char *_strncat(char *dest, char *src, int n);
    char *_strncpy(char *dest, char *src, int n);
    int _strcmp(char *s1, char *s2);
    char *_memset(char *s, char b, unsigned int n);
    char *_memcpy(char *dest, char *src, unsigned int n);
    char *_strchr(char *s, char c);
    unsigned int _strspn(char *s, char *accept);
    char *_strpbrk(char *s, char *accept);
    char *_strstr(char *haystack, char *needle);
```

If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.

```bash
khadija@ubuntu:~/Static Librairies$ ar -t libmy.a 

0-isupper.o
0-memset.o
0-strcat.o
1-isdigit.o
1-memcpy.o
1-strncat.o
100-atoi.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o

khadija@ubuntu:~/Static Librairies$ nm libmy.a 

0-isupper.o:
0000000000000000 T _isupper

0-memset.o:
0000000000000000 T _memset

0-strcat.o:
0000000000000000 T _strcat

1-isdigit.o:
0000000000000000 T _isdigit

1-memcpy.o:
0000000000000000 T _memcpy

1-strncat.o:
0000000000000000 T _strncat

100-atoi.o:
0000000000000000 T _atoi

2-strchr.o:
0000000000000000 T _strchr

2-strlen.o:
0000000000000000 T _strlen

2-strncpy.o:
0000000000000000 T _strncpy

3-islower.o:
0000000000000000 T _islower

3-puts.o:
                 U _putchar
0000000000000000 T _puts

3-strcmp.o:
0000000000000000 T _strcmp

3-strspn.o:
0000000000000000 T _strspn

4-isalpha.o:
0000000000000000 T _isalpha

4-strpbrk.o:
0000000000000000 T _strpbrk

5-strstr.o:
0000000000000000 T _strstr

6-abs.o:
0000000000000000 T _abs

9-strcpy.o:
0000000000000000 T _strcpy

_putchar.o:
0000000000000000 T _putchar
                 U write
khadija@ubuntu:~/Static Librairies$ cat main.c 
#include "main.h"

int main(void)
{
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    return (0);
}

khadija@ubuntu:~/Static Librairies$ gcc -std=gnu89 main.c -L. -lmy -o quote
khadija@ubuntu:~/Static Librairies$ ./quote 
"At the end of the day, my goal was to be the best hacker"
    - Kevin Mitnick
```

### 1. Without libraries what have we? We have no past and no future

Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

```bash
khadija@ubuntu:~/Static Librairies$ ls *.c

0-isupper.c  0-strcat.c  1-isdigit.c  1-strncat.c  2-strlen.c   3-islower.c  3-strcmp.c  4-isalpha.c  5-strstr.c  9-strcpy.c  _putchar.c
0-memset.c   100-atoi.c  1-memcpy.c   2-strchr.c   2-strncpy.c  3-puts.c     3-strspn.c  4-strpbrk.c  6-abs.c

khadija@ubuntu:~/Static Librairies$ ./create_static_lib.sh 
khadija@ubuntu:~/Static Librairies$ ls *.a
liball.a

khadija@ubuntu:~/Static Librairies$ ar -t liball.a
0-isupper.o
0-memset.o
0-strcat.o
100-atoi.o
1-isdigit.o
1-memcpy.o
1-strncat.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
```