//WAP to print multiplication table of a number?
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	
	printf("ENter any number: ");
	scanf("%d",&n);
	
	for(i=0;i<=10;i++)
	{
		printf("%d * %d = %d \n",n,i,n*i);
	}
	return 0;
}
