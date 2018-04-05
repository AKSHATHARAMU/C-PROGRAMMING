#include <stdio.h>
#include<string.h>
int main(void) {
	char str[100];
	int i,len,count=0,count1=0;
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]>='2' && str[i]<='9')
		{
			count++;
			break;
		}
		else
		count1=1;
	}
	if(count>=1)
	{
		printf("no");
	}
	else
	printf("yes");
	return 0;
}
