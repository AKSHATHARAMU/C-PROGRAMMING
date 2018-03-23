#include <stdio.h>
#include<string.h>
int main(void) {
	char str[100];
	int count=0,i,n;
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			count=0;
		}
		else
		{
			count=1;
			printf("no");
			break;	
		}
	}
	if(count==0)
	{
		printf("yes");
	}
return 0;
}
