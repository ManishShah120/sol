//WAP to print exponential value of 10.45678? 
#include<stdio.h>
#include<math.h>	//This header is used for mathematical calculation.
int main()
{
	float e=2.718,n,result;
	
	printf("Enter any value: ");
	scanf("%f",&n);
	
	result = pow(e,n);	// This line raises the power.
	
	printf("The exponential value of %f is %f",n,result);
	return 0;
}
