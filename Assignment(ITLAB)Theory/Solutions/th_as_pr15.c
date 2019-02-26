//WAP to print Fibonacci Series
// 0 1 1 2 3 5 8 13 21.............
#include<stdio.h>
int main()
{
	int f0=0, f1=1, f2=1;
	int n;
	
	printf("Enter the limit:");
	scanf("%d",&n);

	while(n != 0)
	{
		printf("%d ",f0);
		f0 = f1;
		f1=f2;
		f2 = f0 +f1;
		n--;	//Why?
	}
	return 6;

}
/*
++x is same as x = x + 1 or x += 1
--x is same as x = x - 1 or x -= 1
*/
