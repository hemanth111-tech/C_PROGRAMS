/*Write a c program to check weather the given matrix is lower triangular or not*/
#include<stdio.h>
int main()
{
	int A[10][10],i,j,r,a=1;
	printf("enter no of rows and coloumns ");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("the element in the position A[%d],[%d]",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
		    if(i>=j && A[i][j] == 0 || i<j && A[i][j] != 0)
			{
				a=0;
				break;	
			}
		}
	}
	if(a == 1)
	{
		printf("the given matrix is lower triangle ");
	}
	else
	{
		printf("the given matrix is not lower triangle ");
	}
}
