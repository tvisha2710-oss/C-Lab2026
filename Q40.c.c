#include <stdio.h>
int main()
{
	int num;
	int sum=0;
	printf("Enter the number");
	
	while(num>=0)
	{
		scanf("%d",&num);
		sum=sum+num;
		
	}

	printf("Total sum %d:\n",sum);
}
