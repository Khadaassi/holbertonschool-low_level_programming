# C _ARGC, ARGV



### Argc : 

@argc: Integer number of command-line arguments

In programming, argc is a variable that represents the number of arguments passed to a program. It is commonly used in C and C++ to manage command-line arguments. argc is an integer that always counts at least one because the first argument is the program's name itself. Additional arguments are stored in an array called argv, where argv[0] contains the program's name, argv[1] the first argument, argv[2] the second, and so on. This allows the program to process and use the arguments passed during its execution.

### Argv : 

@argv: Array of pointers to strings representing the arguments

argv is a variable frequently used in programming, especially in C and C++. It represents an array of strings (usually of type char*) and is used to store the arguments passed to a program during its command-line execution.
Specifically:
argv stands for "argument vector," suggesting an array of argument strings.
argv[0] contains the program's name itself.
The subsequent elements of argv (i.e., argv[1], argv[2], etc.) contain the additional arguments passed to the program during its execution.
Here is a simple example of how argv is used in C:
```bash
#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc is the number of arguments passed (including the program name)
    printf("Number of arguments (argc): %d\n", argc);

    // Traversing arguments with argv
    for (int i = 0; i < argc; i++) {
        printf("Argument %d (argv[%d]): %s\n", i, i, argv[i]);
    }

    return 0;
}
```
When you run a program with command-line arguments, such as ./myprogram arg1 arg2, argv will contain an array with the following elements:

argv[0] : "./myprogram" (program name)
argv[1] : "arg1" (first argument)
argv[2] : "arg2" (second argument) This allows the program to process and use these arguments to perform specific operations based on the values passed on the command line.

## Resources:

* [Arguments To Main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
* [Argc And Argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
* [What Does Argc And Argv Mean ?](https://www.youtube.com/watch?v=aP1ijjeZc24)
* [How To Compile With Unused Variables](https://www.google.com/webhp?q=unused+variable+C)

## Requirements:

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file
* You are allowed to use the standard library

## TASKS: 

### 0. It ain't what they call you, it's what you answer to
Write a program that prints its name, followed by a new line.

* If you rename the program, it will print the new name, without having to compile it again
*You should not remove the path before the name of the program

```bash
khadija@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis

khadija@ubuntu:~/argc, argv$ ./mynameis 
./mynameis

khadija@ubuntu:~/argc, argv$ mv mynameis mynewnameis
khadija@ubuntu:~/argc, argv$ ./mynewnameis 
./mynewnameis
```

### 1. Silence is argument carried out by other means
Write a program that prints the number of arguments passed into it.

* Your program should print a number, followed by a new line

```bash
khadija@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
1-args.c -o nargs

khadija@ubuntu:~/argc, argv$ ./nargs 
0

khadija@ubuntu:~/argc, argv$ ./nargs hello
1

khadija@ubuntu:~/argc, argv$ ./nargs "hello, world"
1

khadija@ubuntu:~/argc, argv$ ./nargs hello, world
2
```

### 2. The best argument against democracy is a five-minute conversation with the average voter
Write a program that prints all arguments it receives.

* All arguments should be printed, including the first one
* Only print one argument per line, ending with a new line

```bash
khadija@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args

khadija@ubuntu:~/argc, argv$ ./args 
./args

khadija@ubuntu:~/argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
```

### 3. Neither irony nor sarcasm is argument
Write a program that multiplies two numbers.

* Your program should print the result of the multiplication, followed by a new line
* You can assume that the two numbers and result of the multiplication can be stored in an integer
* If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

```bash
khadija@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
khadija@ubuntu:~/argc, argv$ ./mul 2 3
6

khadija@ubuntu:~/argc, argv$ ./mul 2 -3
-6

khadija@ubuntu:~/argc, argv$ ./mul 2 0
0

khadija@ubuntu:~/argc, argv$ ./mul 245 3245342
795108790

khadija@ubuntu:~/argc, argv$ ./mul
Error
```

### 4. To infinity and beyond
Write a program that adds positive numbers.

* Print the result, followed by a new line
* If no number is passed to the program, print 0, followed by a new line
* If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
* You can assume that numbers and the addition of all the numbers can be stored in an int

```bash
khadija@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
khadija@ubuntu:~/argc, argv$ ./add 1 1
2

khadija@ubuntu:~/argc, argv$ ./add 1 10 100 1000
1111

khadija@ubuntu:~/argc, argv$ ./add 1 2 3 e 4 5
Error

khadija@ubuntu:~/argc, argv$ ./add
0
```

### 5. Minimal Number Of Coins For Change
Write a program that prints the minimum number of coins to make change for an amount of money.

* Usage: ./change cents
* where cents is the amount of cents you need to give back
* if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
* you should use atoi to parse the parameter passed to your program
* If the number passed as the argument is negative, print 0, followed by a new line
* You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

```bash
khadija@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
khadija@ubuntu:~/argc, argv$ ./change 
Error

khadija@ubuntu:~/argc, argv$ ./change 10
1

khadija@ubuntu:~/argc, argv$ ./change 100
4

khadija@ubuntu:~/argc, argv$ ./change 101
5

khadija@ubuntu:~/argc, argv$ ./change 13
3
```