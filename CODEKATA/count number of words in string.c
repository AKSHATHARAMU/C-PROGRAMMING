#include <stdio.h>
#include<string.h>
int main(void) {
	char str[100];
	int count=1,len,i;
	gets(str);
	//printf("%s",str);
	len=strlen(str);
	for(i=0;i<=len;i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	if(count>=1)
	{
		printf("%d",count);
	}
	return 0;
}
