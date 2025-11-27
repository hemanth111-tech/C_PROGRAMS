//write a c program to check whether the given element is present in the list or not by using linear search//
#include<stdio.h>
int main()
{
	int a[10],i,target,found=0,n;
	printf("\nenter the size of the array ");
	scanf("%d",&n);		//5
	
	printf("\nenter the elements ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);		//9 5 3 1 8
	
	printf("\nEnter the target element ");
	scanf("%d",&target);
	for(i=0;i<n;i++)
	{
		if(a[i]==target)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	printf("Element is found");
	else
	printf("element is not found");
	}
