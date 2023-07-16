#include <stdio.h>

void main()
{
	char inpchar;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&inpchar);
	printf("ASCII value of %c = %d",inpchar,inpchar);
}