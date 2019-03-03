//25.WAP to delete a particular element from a group of elements,elements are arranged in an array
//User need to enter the position
#include<stdio.h>
int main()
{
	int a[100],i,pos,size;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	printf("Enter %d elements:\n",size);
	
	for(i=0;i<size;i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Enter the position of the element to be deleted: ");
	scanf("%d", &pos);
	
	if(pos<0 || pos>size)
	{
		printf("Please enter a valid Position: ");
	}
	else
	{
		for(i=pos-1;i<size-1;i++)
		{
			a[i]=a[i+1];
		}
		size--;
	}
	
	printf("Elememts after the deletion: ");
	
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
