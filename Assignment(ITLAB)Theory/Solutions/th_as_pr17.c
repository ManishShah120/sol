//17. WAP that reads a positive integer and print its binary equivalent?
#include<stdio.h>
int main()
{
	int n,i,rem[10];
	
	printf("Enter any number in Decimal Number system: ");
	scanf("%d", &n);
	printf("The Binary Equivalent of %d is: ",n);
	
	for(i=0;n>0;i++)
	{
		rem[i]=n%2;
		n=n/2;
	}
	
	for(i=i-1;i>=0;i--)
	{
		printf("%d", rem[i]);
	}
	return 0;
}
