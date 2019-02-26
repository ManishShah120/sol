//23. WAP to print armstrong number between 1 to 500
//	  ex:	153 = (1*1*1)+(5*5*5)+(3*3*3)
/////error
#include<stdio.h>
#include<math.h>
int main()
{
	int n,rem,sum=0,i,m;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	m=n;
	
	for(i=0;i<=n;i++)
	{
		rem=n%10;
		sum=sum+pow(rem,3);
		n=n/10;
	}

	if(sum==m)
	{
		printf("The entered number %d is an armstrong number.",m);
	}
	else
	{
		printf("The entered number %d is not an armstrong number",m);
	}
	return 0;
}
