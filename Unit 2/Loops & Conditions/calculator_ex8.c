#include <stdio.h>

void main()
{
	char operation;
	float num1,num2;
	printf("Enter operator either + or - or * or / : ");
	scanf(" %c",&operation);
	printf("Enter two operands : ");
	scanf(" %f %f",&num1,&num2);
	switch(operation)
	{
		case '+':
		printf("%g + %g = %g",num1,num2,num1+num2);
		break;
		case '-':
		printf("%g - %g = %g",num1,num2,num1-num2);
		break;
		case '*':
		printf("%g x %g = %g",num1,num2,num1*num2);
		break;
		case '/':
		printf("%g / %g = %g",num1,num2,num1/num2);
		break;
		default:
		printf("Bad Input!!");
	}
}