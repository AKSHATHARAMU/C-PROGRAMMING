#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	int b[100],i,j,len,result,res=0;
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		switch(a[i])
		{
		case 'I':
		b[i]=1;
		break;
		case 'V':
		b[i]=5;
		break;
		case 'X':
		b[i]=10;
		break;
		case 'L':
		b[i]=50;
		break;
		case 'C':
		b[i]=100;
		break;
		case 'D':
		b[i]=500;
		break;
		case 'M':
		b[i]=1000;
		break;
	}
	}result=b[len-1];
	for(j=len-1;j>0;j--)
	{
		if(b[j]>b[j-1])
		{
			result=result-b[j-1];
		}
		else
		{
			result=result+b[j-1];
		}
	}
	printf("%d",result);
	return 0;
}
