 //If 5 digit number is input through keyboard WAP to reverse the number?
#include<stdio.h>
int main()
{
	int n,rev=0,rem,i,m;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	m=n;
	for(i=0;i<=n;i++)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("The reverse of %d is %d.",m,rev);
	return 0;
}

