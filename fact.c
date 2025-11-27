#include<stdio.h>
int fact(int );
int main()
{
	int n,i;
	printf("\nenter a natural number ");
	scanf("%d",&n);
	printf("\nfactorial of %d is %d",n,fact(n));
}
int fact(int x)
{
	if(x==1)
	    return 1;
	else
	    return x*fact(x-1);
}
