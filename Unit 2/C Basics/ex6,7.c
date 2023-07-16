#include <stdio.h>

void main()
{
	float a,b;
	printf("Enter value of A : ");
	scanf("%f",&a);
	printf("Enter value of B : ");
	scanf("%f",&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("\nAfter swapping, value of A = %g\n",a);
	printf("After swapping, value of B = %g\n",b);
}