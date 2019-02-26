//WAP to read the values of x and y and print the expressions
//x+y/x-y
//x+y/2
//(x+y)(x-y)

#include<stdio.h>
int main()
{
	int x,y,c;
	float a,b;

	printf("Enter the value of X:");
	scanf("%d",&x);

	printf("Enter the value of Y:");
	scanf("%d",&y);

	a=x+y/x-y;
	b=x+y/2;
	c=(x+y)*(x-y);

	printf("%d+%d/%d-%d = %3f\n",x,y,x,y,a);
	printf("%d+%d/2 = %f\n",x,y,b);
	printf("(%d+%d)(%d-%d) = %d\n",x,y,x,y,c);
	return 0;
}
