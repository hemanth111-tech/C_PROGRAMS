#include<stdio.h>
int fseries(int );
int main()
{
	int n,i;
	printf("\nno of digits in series");
	scanf("%d",&n);
	printf("\nthe series is ");
	for(i=0;i<n;i++)
	    printf("%d ",fseries(i));
	return 0;
}
int fseries(int x)
{
	if(x==0 || x==1)
	    return x;
	else
	    return fseries(x-1) + fseries(x-2);
}
