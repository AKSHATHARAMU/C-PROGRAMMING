#include <stdio.h>
#include<string.h>
int main(void) {
	char n[100];
	int i,len;
	scanf("%s",n);
	len=strlen(n);
	for(i=0;i<len;i++)
	{
		printf("%c ",n[i]);
	}
	return 0;
}
