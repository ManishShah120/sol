//5.WAP to take number as input and display in triangular format. For ex if number is 5678 then
//5678
//678
//78
//8
#include<stdio.h>
int main()
{
	int m,rem1,j,rev=0;
	int n,rem,i;
		
	printf("Enter any number: ");
	scanf("%d", &n);
	
	for(j=0;j<=n;j++)
	{
		rev = (rev*10) + (n%10);
		n /= 10;
	}
	
	for(i=0;i<=rev;i++)
	{
		rem=rev%10;
		printf("%d\n",rev);
		rev=rev/10;
	}
	return 0;
}
