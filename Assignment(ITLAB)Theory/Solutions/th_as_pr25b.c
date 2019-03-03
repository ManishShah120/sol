//WAP to delete a particular element from a group of elements, elements are arranged in an array.
//User have to enter the element
#include<stdio.h>
int main()
{
	int a[100],i,size,flag=0,del,pos;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	printf("Enter the elements of the array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("The entered elements are: ");
	
	for(i=0;i<size;i++)
	{
		printf("%d \t",a[i]);
	}
	
	printf("\n\nEnter The element to be deleted: ");
	scanf("%d", &del);
	
	for(i=0;i<size;i++)
	{
		
		if(a[i]==del)
		{
			flag=1;
			pos=i;
			break;
		}
	}
	
	if(flag==1)
	{
		for(i=pos;i<size-1;i++)
		{
			a[i]=a[i+1];
		}
		
		printf("The elements of the array after the deletion are: ");
	
		for(i=0;i<size-1;i++)
		{
			printf("%d \t",a[i]);
		}
	}
	
	else
	{
		printf("Please eneter a valid element: ");
	}
	
	
	return 0;
}
