#include <stdio.h>
#include <string.h>
int main(void) {
	char s1[100],s2[100];
	int i,j,count=1,len1,len2,p,q;
	gets(s1);
	gets(s2);
	len1=strlen(s1);
	len2=strlen(s2);
	if(len1==len2)
	{
		for(i=0;i<len1;i++)
		{
			for(j=i+1;j<len2;j++)
			{
			p=s1[i]-s1[j];
			q=s2[i]-s2[j];
			if(p==q)
			{
				count=0;
			}
			else
			count=1;
			break;
			}
		}
	}
	else
	{
	printf("no");
	}
	if(count==1)
	{
		printf("no");
	}
	else
	printf("yes");
	return 0;
}
