//WAP to compute real roots of a quadratic equation. Use following rules
//No sol if both a and b are zero
//There is only one root if a=0
//There is no real roots if b2-4ac is negative
//Otherwise there are two real roots

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,disc1,disc2;
	float val1,val2;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("Enter the value of c : ");
	scanf("%d",&c);
	
	disc1=pow(b,2)- 4*a*c;
	disc2=pow(disc1,0.5);
	
	val1=((-b+disc2)/2*a);
	val2=((-b-disc2)/2*a);
	
	if(a==0 || b==0)
	{
		printf("No Solution.\n");
	}
	else if(a=0)
	{
		printf("Only one root = %f.\n",val1);
	}
	else if(disc1 < 0)
	{
		printf("No real root exists.\n");
	}
	else
	{
		printf("The two real roots are %f and %f.\n",val1,val2);
	}
	return 0;
}
