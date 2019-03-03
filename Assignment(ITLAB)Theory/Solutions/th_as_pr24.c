//24.WAP to insert one integer element at a given position in the array of integers?
#include<stdio.h>
int main()
{
	int n,i;
	
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter the elements of %d index: ",i);
		scanf("%d", &a[i]);
	}
	printf("The elements of the array are: \n");
	
	for(i=0;i<n;i++)
	{
		printf("Elements of %d index is %d\n",i,a[i]);
	}
	return 0;
}
