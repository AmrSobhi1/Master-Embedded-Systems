#include <stdio.h>

void main()
{
	int num,prod=1,i;
	printf("Enter an integer : ");
	scanf(" %d",&num);
	if(num>0)
	{
		for(i=1;i<=num;i++)
		{
			prod*=i;
		}
		printf("Factorial = %d",prod);
	}
	else
	{
		printf("Eror!!! Factorial of negative number doesn't exist.");
	}
	
}