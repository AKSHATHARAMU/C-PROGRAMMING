#include <stdio.h>
int main(void) {
	int i,len;
	char a[10],temp;
	gets(a);
	len=strlen(a);
	printf("%d",len);
	if(len%2==0)
	{
	for(i=0;i<len;i+=2)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	if(a[i]=='\0')
	
	printf("%s",a);
	}
return 0;
}
