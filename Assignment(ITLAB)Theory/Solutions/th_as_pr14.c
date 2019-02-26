//WAP to find factorial of a number?
#include<stdio.h>
int main()
{
	int i, n, fact =1;
	
	printf("Enter a number:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		fact=fact *i;
	}
	
	printf("Factorial is: %d \n",fact);
	
	return 0;
}
