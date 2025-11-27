//write a c program to find a smallest and largest element of an array//
#include<stdio.h>
int main()
{
	int a[10],i,min,max,n;
	printf("\nenter the size of the array ");
	scanf("%d",&n);
	printf("\nenter the elements ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);		//1 2 3 4 5 6
	min = a[0];
	max = a[0]; //1
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max = a[i]; //2 3
		if(a[i]<min)
		min = a[i];
	}
	printf("\n min and max elements are %d %d",min,max);
}
