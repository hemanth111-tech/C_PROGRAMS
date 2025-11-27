/*write a c program to write transpose of a given matrix*/
#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],i,j,r;
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
		    B[j][i]=A[i][j];	
			
		}
	}
	printf("the given matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf(" %d",A[i][j]);
		}
		printf("\n");
	}
	printf("the transpose of the given matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf(" %d",B[i][j]);
		}
		printf("\n");
	}	
}
