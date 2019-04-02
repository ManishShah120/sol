//WAP to multiply two 2-D matrices?
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[3][3]/*={1,2,3,4,5,6,7,8,9}*/,b[3][3]/*={1,2,3,4,5,6,7,8,9}*/,c[3][3];
    int p,q,r,d,e,f,g,h,i,j;

    printf("2-D array\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the %d%d element of the first array:",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the %d%d element of the second array:",i,j);
            scanf("%d", &b[i][j]);
        }
    }
	
	//Code for taking input from the user
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    //Codes for multiplying the two matrices?
    p=a[0][0]*b[0][0] + a[0][1]*b[1][0] + a[0][2]*b[2][0];
    q=a[0][0]*b[0][1] + a[0][1]*b[1][1] + a[0][2]*b[2][1];
    r=a[0][0]*b[0][2] + a[0][1]*b[1][2] + a[0][2]*b[2][2];

    d=a[1][0]*b[0][0] + a[1][1]*b[1][0] + a[1][2]*b[2][0];
    e=a[1][0]*b[0][1] + a[1][1]*b[1][1] + a[1][2]*b[2][1];
    f=a[1][0]*b[0][2] + a[1][1]*b[1][2] + a[1][2]*b[2][2];

    g=a[2][0]*b[0][0] + a[2][1]*b[1][0] + a[2][2]*b[2][0];
    h=a[2][0]*b[0][1] + a[2][1]*b[1][1] + a[2][2]*b[2][1];
    i=a[2][0]*b[0][2] + a[2][1]*b[1][2] + a[2][2]*b[2][2];

    printf("\nThe multiplication of Both the array are");
    printf("\n %d\t%d\t%d\n %d\t%d\t%d\n %d\t%d\t%d\n",p,q,r,d,e,f,g,h,i);
return 0;
}
