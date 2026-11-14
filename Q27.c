//Prime
#include <stdio.h>
int main()
{
	int b,num,flag=0;
	printf("Enter the number");
	scanf("%d",&num);
	for(b=2;b<num;b++)
	{
		if (num%b==0)
		{
			flag==1;
		}
	}
		if(flag==0) 
		{
			printf("Prime");
		}
		else
		{
			printf("Not a Prime");
		}
}
