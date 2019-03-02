//10.Print Floyd’s triangle
//1
//23
//456
//78910
//1112131415
//79……….91
#include<stdio.h>
int main()
{				
	int i, j, k=1;		//i=Row(number of line),j=Coloumn,k=Number
	
	for(i=1;i<=13;i++)
	{
		for(j=1;j<=i;j++,k++)
		{
				printf("%d ",k);
	    }
	    printf("\n");
	}
	return 0;
}
