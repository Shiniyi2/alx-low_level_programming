

1 of 50

C langu



Fatai Yahya <yahyafatai@gmail.com>

Thu, Sep 8, 9:07 PM (3 days ago)

to shiniyi



C langu

For the C -Hello world task



First go to github and create the repository "alx-low_level_programming"

Go to your Sandbox and clone into the repo

After clonning cd into the repo



Create a Readme file

Add and push to git

Make a new directory called "0x00-hello_world"

Cd into the dir

Create a Readme file

Add and push to git..

Now you'd do ur tasks

0-8 under it



Task 0

Vi 0-preprocessor

Enter these lines

#!/bin/bash

gcc -E $CFILE -o c

Save and quit



Task 1

Vi 1-compiler



#!/bin/bash

gcc -c $CFILE $FILE



Task 2

Vi 2-assembler



#!/bin/bash

gcc -S $CFILE



Task 3

Vi 3-name



#!/bin/bash

gcc $CFILE  -o cisfun



Task 4(for this task and the down to 7 u no longer need the shebang)

	Vi 4-puts.c

	Type in the following lines of code



#include <stdio.h>

	/**
	 *
	 * *main- Serves as the entry point for the program
	 *
	 * *
	 *
	 * *Return: By default returns zero if no erros otherwise returns non-zero value.
	 *
	 * */

	int main(void)

{

	puts("\"Programming is like building a multilingual puzzle");

	return (0);

}



Task 5

Vi 5-printf.c



#include <stdio.h>

/**
 *
 * * main-entry point for the program.
 *
 * *
 *
 * * Return:0 if no errors, return non zero if errors
 *
 * */

int main(void)

{

	printf("with proper grammar, but the outcome is a piece of art,\n");

	return (0);

}



Task 6

Vi 6-size.c



#include <stdio.h>

/**
 *
 * *main -is the entry point for the program.
 *
 * *
 *
 * *Return:zero if no error, Non-zero value  if errors.
 *
 * */

int main(void)

{

	printf("Size of a char: %ld byte(s)\n", sizeof(char));

	printf("Size of an int: %ld byte(s)\n", sizeof(int));

	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));

	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));

	printf("Size of a float: %ld byte(s)\n", sizeof(float));

	return (0);

}
