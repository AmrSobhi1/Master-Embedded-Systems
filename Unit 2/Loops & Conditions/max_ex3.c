#include <stdio.h>

void main()
{
	float a,b,c;
	printf("Please enter a,b,c\n");
	scanf("%f %f %f",&a,&b,&c);
	if(a>=b && a>=c)
	{
		printf("Largest value is : %g",a);
	}
	else if(b>=a && b>=c)
	{
		printf("Largest value is : %g",b);
	}
	else if(c>=a && c>=b)
	{
		printf("Largest value is : %g",c);
	}
}