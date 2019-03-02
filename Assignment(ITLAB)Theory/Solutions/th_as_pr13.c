//13.WAP to find the prime numbers between 2 to 100

#include<stdio.h>
int main()
{
	int isPrime, i, j;

	for(j=2;j<=100;j++)
	{
		isPrime=1;
		
		for(i=2;i<=j/2;i++)
			{
				if(j%i==0)
				{			
					isPrime=0;
					break;
				}
			}		
		if(isPrime == 1)
			{
				printf("%d \n", j);
			}
	}

	printf("\n");	
	return 0;
}

