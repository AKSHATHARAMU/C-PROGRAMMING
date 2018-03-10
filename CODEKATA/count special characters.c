#include <stdio.h>
#include<string.h>
int main(void) {
	char str[100];
	int i,count=0,count1=0,len;
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]==' ') || (str[i]=='\n') || (str[i]=='\t'))
		{
		count=count+1;
		}
		else
		{
			count1++;
		}
	}
	if(count1>0)
	{
	printf("%d",count1);
	}
	return 0;
}

