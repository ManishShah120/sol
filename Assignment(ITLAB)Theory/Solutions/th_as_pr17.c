//17. WAP that reads a positive integer and print its binary equivalent?
#include<stdio.h>
int main()
{
	int n,rem;
	
	printf("Enter any Positive integer: ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if()
	{
		
	}
}
