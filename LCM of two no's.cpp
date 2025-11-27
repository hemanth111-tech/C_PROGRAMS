//write a c program to find LCM of any two numbers//
#include<stdio.h>
int lcm(int,int);
int main()
{
	int n1,n2,result;
	printf("\nEnter two integer numbers ");
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
	result = lcm(n2,n1);
	else
	result = lcm(n1,n2);
	printf("nLCM is %d",result);
}
int lcm(int a,int b)
{
	static int temp=0;
	temp=temp+b;
	if (temp%a==0&&temp%b==0)
	return temp;
	else 
	return lcm(a,b); 
}


	
