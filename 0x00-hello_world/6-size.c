#include <stdio.h>

int main(void)

{

char c;
int i;	
long ii;
long long iii;	
float f;

printf("Size of a char: %ld byte(s)\n", sizeof(c));
printf("Size of an int: %ld byte(s)\n", sizeof(i));
printf("Size of a long int: %ld byte(s)\n", sizeof(ii)); 		
printf("Size of a long long int: %ld byte(s)\n", sizeof(iii));
printf("Size of a float: %ld byte(s)\n", sizeof(f));				return (0);

}
