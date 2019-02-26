//WAP to read three integer values and display output stating that they are the sides of right angled triangle
#include<stdio.h>
int main()
{
	int x,y,z,hyp,per,bse;
	
	printf("Enter the base of the triangle:");
	scanf("%d",&x);
	
	printf("Enter the perpendicular of the triangle:");
	scanf("%d",&y);
	
	printf("Enter the hypotenuse of the triangle:");
	scanf("%d",&z);
	
	hyp=z*z;
	per=y*y;
	bse=x*x;

	if(hyp==per+bse)
	{
		printf("This is a right angled triangle.\n");
	}

	else
	{
		printf("This are not the sides of right angled triangle.\n");
	}
	return 0;
}

/*
	int test;
	test =(x*x == y*y + z*z) || (y*y == x*x + z*z) || (z*z == x*x + y*y);
	
	if (test)
	{
		printf("yes");
	}
	else
	{
	printf("nO");
	}
*/

