#include <stdio.h>
int main(void) {
	char str[100];
	int i,count=0,len;
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]==' ' || str[i]=='\t' || str[i]=='\n')
		{
		count=count+1;
		}
		i++;
	}
	printf("%d",count);
	return 0;
}
