#include <stdio.h>
/**
 * main -To print out the sizes of data typs in C
 *
 * Return:0
*/
int main(void)
{
        int a;
	long int b;
	long long int d;
	char e;
	float c;
	
	printf("Size of a int: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(e));
        return (0);
}
