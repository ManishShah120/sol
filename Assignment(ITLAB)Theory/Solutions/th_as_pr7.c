//WAP to find that given an integer is odd or even?
#include<stdio.h>
int main()
{
	int a;

	printf("Enter any number: ");
	scanf("%d",&a);

	if(a%2==0)
	{
		printf("%d is Even.\n",a);
	}
	else
	{
		printf("%d is Odd.\n",a);
	}
	return 0;
}
