#include <stdio.h>
#include<string.h>
int main(void) {
	int a[10],i,len,k;
	char rom[10];
	gets(rom);
	len=strlen(rom);
	for(i=0;i<len;i++)
	{
	if(rom[i]=='I')
	a[i]=1;
	else if(rom[i]=='X')
	a[i]=10;
	else if(rom[i]=='V')
	a[i]=5;
	else if(rom[i]=='C')
	a[i]=100;
	else if(rom[i]=='D')
	a[i]=500;
	else if(rom[i]=='M')
	a[i]=1000;
	else if(rom[i]=='L')
	a[i]=50;
	}
	k=a[len-1];
	for(i=len-1;i>0;i--)
	{
		if(a[i]>a[i-1])
		k=k-a[i-1];
		if((a[i]<a[i-1])||(a[i]==a[i-1]))
		k=k+a[i-1];
	}
	printf("%d",k);
	
	return 0;
}
