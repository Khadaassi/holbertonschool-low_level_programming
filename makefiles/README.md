# C - Makefiles

## Résumé :

* Un Makefile est un fichier de configuration qui spécifie comment un programme doit être construit.
* Il contient des règles décrivant les dépendances entre les fichiers source et les fichiers objets, ainsi que les commandes nécessaires pour effectuer la compilation.
* Les Makefiles utilisent l'utilitaire make pour automatiser le processus de compilation, facilitant ainsi le travail du développeur.
* Les règles définissent généralement comment les fichiers source sont transformés en fichiers objets, puis en exécutables.
* Les Makefiles sont utiles pour éviter de recompiler l'ensemble du programme lorsque seul un fichier source spécifique a été modifié, économisant ainsi du temps de compilation.


En résumé, les Makefiles sont des fichiers de configuration utilisés dans le développement logiciel pour définir les règles de compilation et automatiser le processus de construction d'un programme, ce qui facilite la gestion des dépendances entre les fichiers source et objets.

## Resources:
* [Makefile](https://www.google.com/search?q=makefile)
* [Makefile Tutorial](https://makefiletutorial.com/)

## Requirements:

* Allowed editors: vi, vim, emacs
* OS: Ubuntu 20.04 LTS
* Version of gcc: 9.3.0
* Version of make: GNU Make 4.2.1
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory


## TASKS: 

### 0. make -f 0-Makefile
Create your first Makefile.

Requirements:

* name of the executable: school
* rules: all
 * The all rule builds your executable
* variables: none

```bash
khadija@ubuntu:~/Makefiles$ make -f 0-Makefile 
gcc main.c school.c -o school
khadija@ubuntu:~/Makefiles$ ./school 

j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
```

### 1. make -f 1-Makefile
Requirements:

* name of the executable: school
* rules: all
* * The all rule builds your executable
* variables: CC, SRC
* * CC: the compiler to be used
* * SRC: the .c files

```bash
khadija@ubuntu:~/Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school

khadija@ubuntu:~/Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
```

### 2. make -f 2-Makefile
Create your first useful Makefile.

Requirements:

* name of the executable: school
* rules: all
* * The all rule builds your executable
* variables: CC, SRC, OBJ, NAME
* * CC: the compiler to be used
* * SRC: the .c files
* * OBJ: the .o files
* * NAME: the name of the executable
* The all rule should recompile only the updated source files
* You are not allowed to have a list of all the .o files

```bash
khadija@ubuntu:~/Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school

khadija@ubuntu:~/Makefiles$ make -f 2-Makefile
gcc main.o school.o -o school

khadija@ubuntu:~/Makefiles$ echo "/* School */" >> main.c

khadija@ubuntu:~/Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc main.o school.o -o school
```

### 3. make -f 3-Makefile
Requirements:

* name of the executable: school
* rules: all, clean, oclean, fclean, re
* * all: builds your executable
* * clean: deletes all Emacs and Vim temporary files along with the executable
* * oclean: deletes the object files
* * fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
* * re: forces recompilation of all source files
* variables: CC, SRC, OBJ, NAME, RM
* * CC: the compiler to be used
* * SRC: the .c files
* * OBJ: the .o files
* * NAME: the name of the executable
* * RM: the program to delete files
* The all rule should recompile only the updated source files
* The clean, oclean, fclean, re rules should never fail
* You are not allowed to have a list of all the .o files

```bash
khadija@ubuntu:~//Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school.c
main.c
main.c~
m.h

khadija@ubuntu:~/Makefiles$ make -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school

khadija@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school

khadija@ubuntu:~/Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school
school.c
school.o
main.c
main.c~
main.o
m.h

khadija@ubuntu:~/Makefiles$ make clean -f 3-Makefile 
rm -f *~ school

khadija@ubuntu:~/Makefiles$ make oclean -f 3-Makefile 
rm -f main.o school.o

khadija@ubuntu:~/Makefiles$ make fclean -f 3-Makefile 
rm -f *~ school
rm -f main.o school.o

khadija@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school

khadija@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school

khadija@ubuntu:~/Makefiles$ make re -f 3-Makefile
rm -f main.o school.o
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
```

### 4. A complete Makefile
Requirements:

* name of the executable: school
* rules: all, clean, fclean, oclean, re
* * all: builds your executable
* * clean: deletes all Emacs and Vim temporary files along with the executable
* * oclean: deletes the object files
* * fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
* * re: forces recompilation of all source files
* variables: CC, SRC, OBJ, NAME, RM, CFLAGS
* * CC: the compiler to be used
* * SRC: the .c files
* * OBJ: the .o files
* * NAME: the name of the executable
* * RM: the program to delete files
* * CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
* The all rule should recompile only the updated source files
* The clean, oclean, fclean, re rules should never fail

* You are not allowed to have a list of all the .o files

```bash
khadija@ubuntu:~/Makefiles$ make all -f 4-Makefile
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
gcc main.o school.o -o school
```