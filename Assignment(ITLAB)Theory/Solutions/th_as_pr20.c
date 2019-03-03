//20. WAP to generate all combinations of 1 2 and 3 
//123,321,213,312,132
#include<stdio.h>
int main()
{
	int n,rem,a[3],i,j,m;
	
	printf("Enter any number: ");
	scanf("%d", &n);
	m=n;
	for(i=0;i<n;i++)
	{
		rem=n%10;
		n /=10;
		a[i]=rem;
	}
/*				//Code to print all the stored digits of the number:
	for(j=0;j<3;j++)
	{
		printf("%d\t",a[j]);
	}
*/	
	printf("\nAll the combinations of %d are: ",m);
	printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d ",a[0],a[1],a[2], a[1],a[0],a[2], a[2],a[0],a[1], a[2],a[1],a[0],  a[2],a[0],a[1], a[1],a[0],a[2]);
	return 0;
	
}
//It doesnt work for 123,234,100,101 but works for 987,876,765
