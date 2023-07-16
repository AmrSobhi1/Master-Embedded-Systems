#include <stdio.h>

void main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c",&c);
	
	if((c>96&&c<123) || (c>64&&c<91))
	{
		printf("%c is a letter",c);
	}
	else
	{
		printf("%c is not a letter",c);
	}
	
}