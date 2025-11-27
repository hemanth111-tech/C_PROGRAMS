//write a c program to find no of vowels,constants,digits,spaces in a given sentence//
#include<stdio.h>
int main()
{
	char sent[20];
	int v=0,c=0,d=0,s=0,i;
	printf("\nenter the sentence ");
	scanf(" %[^\n]",sent);		//this is sap2 section\0
	
	for(i=0;sent[i]!='\0';i++)
	{
		if(sent[i]=='a' || sent[i]=='e'|| sent[i]=='i'||
		sent[i]=='0'|| sent[i]=='u'|| sent[i]=='A'|| sent[i]=='E'
		|| sent[i]=='I'|| sent[i]=='o'|| sent[i]=='U')
		v++;
	
	else if(sent[i]>='a'&&sent[i]<='z')
	c++;
	else if(sent[i]>='0' && sent[i]<='9')
	d++;
	else if(sent[i]==' ')
	s++;
}
printf("vowels %d,consonants %d,digits %d,spaces %d",v,c,d,s);
}
