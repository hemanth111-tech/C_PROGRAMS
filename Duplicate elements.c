//write a c program to print duplicate elements in array//
#include <stdio.h>
int main()
{
	int a[100],n,i,j;
	printf("Enter number of elements:");
	scanf("%d", &n);
	printf("Enter the elements:\n");
	for(i = 0;i < n; i++)
	scanf("%d", &a[i]); //1 2 3 2 1
	printf("Duplicate elements are:\n");
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
	{
		if(a[i] == a[j])
		{
			printf("%d ", a[i]);
			break;
		}
	}
}
return 0;
}


