#include <stdio.h>

void main()
{
	int num,sum=0,i;
	printf("Enter an integer : ");
	scanf(" %d",&num);
	
	for(i=1;i<=num;i++)
	{
		sum+=i;
	}
	printf("Sum = %d",sum);
}
