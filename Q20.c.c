
#include <stdio.h>
int main()
{
	int a,b;
	char op;
	printf("Enter the number1");
	scanf("%d",&a);
	printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);
	printf("Enter the number2");
	scanf("%d",&b);
	switch(op)
	{
		case '+':
		printf("The sum of numbers is %d",a+b);
		break;

		case '-':
		printf("The diff of numbers is %d",a-b);
		break;

	
		case '*':
		printf("The multi of numbers is %d",a*b);
		break;

		case '/':
		printf("The div of numbers is %d",a/b);
		break;
		
		default:
			printf("Invalid");
	}
	
}
