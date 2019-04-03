//26.WAP to copy one string into another and count the number of characters copied.
#include<stdio.h>
#include<string.h>
int main()
{
	char fname[40],lname[40];
	
	printf("Enter the first string:");
	gets(fname);
	
	strcpy(lname,fname); //String is being copied to lname
	
	printf("%s",lname);
	
	printf("\nNumber of string copied %d",strlen(fname));
	return 0;
}
