#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[100];
	int len,i,count=0,count1=0,count2=0;
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
		{
			count++;
		}
		else if(s[i]>='1' && s[i]<='9')
		{
			count1++;
		}
		else
		count2++;
	}
	if(count>0 && count1>0)
	{
		printf("yes");
	}
	else
	printf("no");
	return 0;
}
