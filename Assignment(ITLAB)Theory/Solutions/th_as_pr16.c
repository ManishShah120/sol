/*16.WAP to print based on user input
    (a)	1 				(b)   *	
		2 2			    	  * *
		3 3 3			      * * *	
		4 4 4 4		  	      * * * *	
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{							//Out of three uncomment any one.
			//printf("* ");
			//printf("%d",i);
			printf("%d",j);
			
		}
	printf("\n");	
	}
	printf("\n");
	return 0;
}

//i is controlling the row.
//j is contyrolling the coloumn.
