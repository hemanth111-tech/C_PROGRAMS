/*write a c program to print the trace of a matrix*/
#include<stdio.h>
int main()
{
	int mat[3][3],sum=0,i,j;
	printf("\nEnter the elements of the matrix ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	{
		scanf("%d",&mat[i][j]);	
		}
	}
	for(i=0;i<3;i++)
	{
		sum = sum + mat[i][i];
	}
	printf("\nTrace of a given matrix is %d",sum);
}
