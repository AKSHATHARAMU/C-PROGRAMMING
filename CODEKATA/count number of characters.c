#include <stdio.h>
int main(void) {
	char str[100];
	int i,count=0;
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
		{
			count=count+1;
		}
		i++;
	}
	printf("%d",count);
	return 0;
}
